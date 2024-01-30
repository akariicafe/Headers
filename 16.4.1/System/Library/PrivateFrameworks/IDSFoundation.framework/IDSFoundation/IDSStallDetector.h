@class NSMutableArray;

@interface IDSStallDetector : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _stallDetectedBlock;
    id /* block */ _stallWarningBlock;
    unsigned long long _consumeDelayThreshold;
    double _byteMovementDelayThreshold;
    NSMutableArray *_bytesHistory;
    NSMutableArray *_bytesTimestamps;
}

@property (nonatomic) BOOL verboseLogging;
@property (nonatomic) unsigned long long consumeDelayThreshold;
@property (nonatomic) double byteMovementDelayThreshold;

+ (id)detectorWithName:(id)a0;
+ (id)newDetectorWithName:(id)a0 stallDetectedBlock:(id /* block */)a1 stallWarningBlock:(id /* block */)a2;
+ (void)removeDetectorWithName:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)byteMovementCheckForEvent:(id)a0;
- (void)consumeBytes:(int)a0;
- (BOOL)consumeTimeCheckForEvent:(id)a0 produceTime:(unsigned long long)a1 consumeTime:(unsigned long long)a2;
- (void)forceTriggerStallDetectedBlockWithEventName:(id)a0;
- (void)produceBytes:(int)a0;

@end
