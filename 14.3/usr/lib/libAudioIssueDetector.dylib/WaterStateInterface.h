@interface WaterStateInterface : NSObject

+ (id)sharedInstance;

- (void)connect;
- (void)disconnect;
- (BOOL)isWaterStateON;

@end
