@interface WristStateListener : NSObject

+ (id)sharedInstance;

- (void)startListen;
- (void)stopListen;
- (BOOL)isWristOn;
- (void)bypassDetection;

@end
