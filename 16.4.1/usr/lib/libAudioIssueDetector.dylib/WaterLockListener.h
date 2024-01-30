@interface WaterLockListener : NSObject

+ (id)sharedInstance;

- (BOOL)isWaterLockedOff;
- (void)startListen;
- (void)stopListen;

@end
