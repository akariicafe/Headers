@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (id)deviceClass;
- (BOOL)isHeySiriAlwaysOn;
- (BOOL)isDeviceIPad;
- (BOOL)isDeviceIPhone;
- (BOOL)MGIsDeviceOneOfTypes:(id)a0;
- (id)deviceClassiPad;
- (BOOL)MGIsDeviceOneOfType:(long long)a0;
- (id)deviceClassiPhone;
- (long long)getSimulatorDevice;
- (BOOL)isDeviceIPod;
- (BOOL)isPlusIPhone;
- (BOOL)isRunningOnSimulator;
- (BOOL)isSmallIPhone;
- (BOOL)isSmallestIPhone;
- (BOOL)supportsSideButtonActivation;

@end
