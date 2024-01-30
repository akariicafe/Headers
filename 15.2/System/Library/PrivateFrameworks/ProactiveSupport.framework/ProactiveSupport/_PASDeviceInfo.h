@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isiPad;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isDNUEnabled;
+ (BOOL)isAudioAccessory;
+ (BOOL)isBetaBuild;
+ (BOOL)isInternalBuild;
+ (id)deviceUUID;
+ (BOOL)isLowEndHardware;

- (id)init;
- (void)dealloc;

@end
