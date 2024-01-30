@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (id)deviceClass;
- (BOOL)isHeySiriAlwaysOn;
- (BOOL)isDeviceIPad;
- (BOOL)supportsSideButtonActivation;
- (BOOL)MGIsDeviceOneOfType:(long long)a0;
- (BOOL)isRunningOnSimulator;
- (BOOL)MGIsDeviceOneOfTypes:(id)a0;
- (long long)getSimulatorDevice;
- (id)deviceClassiPad;
- (id)deviceClassiPhone;
- (BOOL)isPlusIPhone;
- (BOOL)isSmallIPhone;
- (BOOL)isSmallestIPhone;
- (BOOL)isDeviceIPhone;
- (BOOL)isDeviceIPod;

@end
