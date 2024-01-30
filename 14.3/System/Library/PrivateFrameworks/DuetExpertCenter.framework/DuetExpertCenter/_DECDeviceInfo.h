@interface _DECDeviceInfo : NSObject {
    int _batterySaverModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isInternalBuild;
+ (BOOL)isBetaBuild;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isBatterySaverEnabled;
+ (BOOL)isLowEndHardware;

- (id)init;
- (void)dealloc;

@end
