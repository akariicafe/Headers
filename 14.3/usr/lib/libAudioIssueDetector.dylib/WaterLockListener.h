@interface WaterLockListener : NSObject

+ (id)sharedInstance;

- (void)startListen;
- (void)stopListen;
- (BOOL)isWaterLockedOff;

@end
