@interface RTKeybagMonitor : NSObject

- (BOOL)lockDevice;
- (int)getDeviceLockState;
- (BOOL)getUnlockedSinceBoot;

@end
