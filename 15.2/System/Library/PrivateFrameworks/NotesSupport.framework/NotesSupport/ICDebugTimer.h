@class NSDate;

@interface ICDebugTimer : NSObject

@property (retain) NSDate *startingDate;
@property double elapsedTime;

+ (id)debugTimerForClass:(Class)a0;
+ (void)enableTimersForClass:(Class)a0;

- (void)start;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)stop;

@end
