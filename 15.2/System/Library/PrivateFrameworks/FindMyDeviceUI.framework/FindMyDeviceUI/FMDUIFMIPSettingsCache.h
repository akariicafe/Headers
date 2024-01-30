@interface FMDUIFMIPSettingsCache : NSObject

@property (nonatomic) BOOL fmipStateAvailable;
@property (nonatomic) unsigned long long fmipState;
@property (nonatomic) BOOL lowBatteryLocateStateAvailable;
@property (nonatomic) BOOL lowBatteryLocateEnabled;
@property (readonly, nonatomic) BOOL fmipEnabled;
@property (readonly, nonatomic) BOOL fmipStateChangeInProgress;

+ (id)sharedInstance;

- (id)init;
- (void)_loadFMIPState;
- (void)_loadLowBatteryState;

@end
