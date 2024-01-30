@interface _DECDeviceInfo : NSObject {
    int _batterySaverModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isBetaBuild;
+ (BOOL)isInternalBuild;
+ (BOOL)isLowEndHardware;
+ (BOOL)isBatterySaverEnabled;

- (id)init;
- (void)dealloc;

@end
