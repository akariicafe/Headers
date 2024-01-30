@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isiPad;
+ (BOOL)isInternalBuild;
+ (id)internalDeviceCode;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isBetaBuild;
+ (BOOL)isDNUEnabled;
+ (BOOL)isLowEndHardware;
+ (BOOL)isAudioAccessory;
+ (id)deviceUUID;

- (void)dealloc;
- (id)init;

@end
