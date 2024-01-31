@class AXUIClient, NSString;

@interface AXBDisplayFilterManager : NSObject <AXUIClientDelegate> {
    struct __MADisplayFilter { } *_displayFilterFromLastUpdate;
}

@property (retain, nonatomic) AXUIClient *displayFilterUIClient;
@property (nonatomic) BOOL softwareFiltersEnabled;
@property (nonatomic) BOOL didEnableHWFilters;
@property (nonatomic) BOOL invertColorsWasEnabled;
@property (nonatomic) BOOL grayscaleWasEnabled;
@property (nonatomic) BOOL reduceWhitePointWasEnabled;
@property (nonatomic) BOOL ignoringNotifications;
@property (nonatomic) double lastCommittedReduceWhitePointValue;
@property (nonatomic) double lastCommittedReduceWhitePointEnabledStatus;
@property (nonatomic) double reduceWhitePointRampStartTime;
@property (nonatomic) double reduceWhitePointRampTime;
@property (nonatomic) double reduceWhitePointRampStartValue;
@property (nonatomic) double reduceWhitePointRampEndValue;
@property (retain, nonatomic) struct __MADisplayFilter { } *reduceWhitePointRampDownFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)disableAllFilters;
+ (void)initializeMonitor;

- (void)dealloc;
- (void)_updateSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings;
- (void)setDisplayFilterFromLastUpdate:(struct __MADisplayFilter { } *)a0;
- (BOOL)_allowSoftwareFilters;
- (void)_applyMatrixFilter:(struct __MADisplayFilter { } *)a0 whitePointReduction:(double)a1;
- (BOOL)_forceSoftwareFilters;
- (void)_handleFrameRateLimit;
- (BOOL)_invertColorsEnabled;
- (void)_repostNotificationIfNeeded;
- (void)_updateBrightnessFilters:(BOOL)a0;
- (void)_updateCoreSupport;
- (void)_updateMatrixSupport;
- (void)_updateNotificationCache;
- (void)_whitePointRampDown;
- (struct __MADisplayFilter { } *)displayFilterFromLastUpdate;

@end
