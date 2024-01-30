@class NSMutableData;

@interface ASCHasher : NSObject

@property (class, readonly) unsigned long long executionSeed;

@property (readonly, nonatomic) NSMutableData *buffer;
@property (nonatomic) BOOL isFinalized;

- (void)combineBool:(BOOL)a0;
- (void)combineInteger:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)combineBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)combineDouble:(double)a0;
- (void)combineObject:(id)a0;
- (void)combineUnsignedInteger:(unsigned long long)a0;
- (unsigned long long)finalizeHash;

@end
