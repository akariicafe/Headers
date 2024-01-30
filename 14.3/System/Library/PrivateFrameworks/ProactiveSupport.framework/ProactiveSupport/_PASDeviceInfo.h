@interface _PASDeviceInfo : NSObject {
    int _batterySaverModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isInternalBuild;
+ (BOOL)isBetaBuild;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isBatterySaverEnabled;
+ (id)deviceUUID;
+ (BOOL)isDNUEnabled;
+ (BOOL)isLowEndHardware;
+ (BOOL)isAudioAccessory;

- (id)init;
- (void)dealloc;

@end
