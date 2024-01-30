@class NSMutableArray;

@interface MSStopwatch : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long stopTime;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long elapsedTimeMS;
@property (nonatomic) unsigned long long lastLapTime;
@property (nonatomic) long long status;
@property (nonatomic) BOOL isLocked;
@property (retain, nonatomic) NSMutableArray *laps;

- (void)lap;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)stop;
- (void)lapWithName:(id)a0;
- (void)toggleLock:(BOOL)a0;

@end
