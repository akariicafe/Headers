@class PCPersistentTimer, NSString, PCKeepAliveState, NSRunLoop, NSObject;
@protocol OS_os_log, PCConnectionManagerDelegate, PCGrowthAlgorithm, OS_dispatch_queue;

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate> {
    int _connectionClass;
    id<PCConnectionManagerDelegate> _delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    BOOL _onlyAllowedStyleSet;
    unsigned long long _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_logObject;
    id<PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
    id<PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
    id<PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastStartTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastScheduledIntervalTime;
    double _timerGuidance;
    double _lastElapsedInterval;
    BOOL _operatorMinimumIntervalFallbackAllowed;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    BOOL _pollingIntervalOverrideSet;
    BOOL _hasStarted;
    BOOL _isRunning;
    BOOL _inCallback;
    BOOL _isInReconnectMode;
    BOOL _reconnectWithKeepAliveDelay;
    BOOL _forceManualWhenRoaming;
    BOOL _enableNonCellularConnections;
    BOOL _isReachable;
    BOOL _disableEarlyFire;
    BOOL _deviceUnderGoodCondition;
    int _currentGrowthStage;
    id _duetContextRegistration;
    int _currentAddressFamily;
}

@property (weak, nonatomic) id<PCConnectionManagerDelegate> delegate;
@property (copy, nonatomic) NSString *duetIdentifier;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) double currentKeepAliveInterval;
@property (nonatomic) double minimumKeepAliveInterval;
@property double maximumKeepAliveInterval;
@property (readonly, nonatomic) PCKeepAliveState *currentKeepAliveState;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) BOOL usingServerStatsAggressively;
@property (readonly, nonatomic) unsigned long long countOfGrowthActions;
@property (nonatomic) BOOL disableEarlyFire;
@property (nonatomic) BOOL minimumIntervalFallbackEnabled;
@property (nonatomic) long long interfaceIdentifier;
@property (nonatomic) BOOL alwaysWantsInterfaceChangeCallbacks;
@property (nonatomic) BOOL powerOptimizationsForExpensiveNetworkingDisabled;
@property (nonatomic) int currentAddressFamily;
@property (readonly, nonatomic) int lastProcessedAction;
@property (nonatomic) double keepAliveGracePeriod;
@property (nonatomic) double nonCellularEarlyFireConstantInterval;
@property (readonly, nonatomic) double pollingInterval;
@property (readonly, nonatomic) int currentGrowthStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_keepAliveCachePath;
+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)a0 date:(id)a1;
+ (Class)growthAlgorithmClass;
+ (id)intervalCacheDictionaries;

- (void)interfaceManagerInternetReachabilityChanged:(id)a0;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)_validateActionForCurrentStyle:(int)a0;
- (id)_stringForAction:(int)a0;
- (int)currentStyle;
- (void)_releasePowerAssertion;
- (void).cxx_destruct;
- (id)_stringForEvent:(int)a0;
- (void)_callDelegateWithEventAndContext:(id)a0;
- (BOOL)_hasBudgetRemaining;
- (BOOL)shouldClientScheduleReconnectDueToFailure;
- (void)dealloc;
- (void)_setMinimumKeepAliveInterval:(double)a0 onInterface:(long long)a1;
- (id)initWithConnectionClass:(int)a0 delegate:(id)a1 delegateQueue:(id)a2 serviceIdentifier:(id)a3;
- (void)_setMaximumKeepAliveInterval:(double)a0 onInterface:(long long)a1;
- (void)setEnableNonCellularConnections:(BOOL)a0;
- (void)_preferencesChanged;
- (void)_clearTimersReleasingPowerAssertion:(BOOL)a0;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)a0;
- (void)_intervalTimerFired;
- (void)_adjustPollTimerIfNecessary;
- (void)_deregisterForDeviceConditionsNotifications;
- (id)_currentGrowthAlgorithm;
- (void)_delayTimerFired;
- (void)_setupKeepAliveForReconnect;
- (id)_initWithConnectionClass:(int)a0 interfaceIdentifier:(long long)a1 guidancePriority:(unsigned long long)a2 delegate:(id)a3 delegateQueue:(id)a4 serviceIdentifier:(id)a5;
- (id)_growthAlgorithmOnInterface:(long long)a0;
- (void)stopAndResetManager;
- (id)_stringForStyle:(int)a0;
- (BOOL)_isPushConnected;
- (void)setPollingIntervalOverride:(double)a0;
- (id)initWithConnectionClass:(int)a0 delegate:(id)a1 serviceIdentifier:(id)a2;
- (void)carrierBundleDidChange;
- (void)_loadPreferencesGeneratingEvent:(BOOL)a0;
- (void)resumeManagerWithAction:(int)a0 forceGrow:(BOOL)a1;
- (id)persistentInterfaceManager;
- (void)_clearTimers;
- (void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)a0;
- (void)stopManager;
- (void)setOnlyAllowedStyle:(int)a0;
- (BOOL)operatorMinimumIntervalFallbackAllowed;
- (void)_calloutWithEvent:(int)a0 context:(id)a1;
- (id)initWithConnectionClass:(int)a0 interfaceIdentifier:(long long)a1 guidancePriority:(unsigned long long)a2 delegate:(id)a3 serviceIdentifier:(id)a4;
- (id)_stringForAddressFamily:(int)a0;
- (void)resumeManagerWithAction:(int)a0;
- (void)_takePowerAssertionWithTimeout:(double)a0;
- (void)_setupTimerForPollForAdjustment:(BOOL)a0;
- (id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)a0;
- (void)_handleDeviceConditionChangeCallback;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)a0;
- (void)_saveWWANKeepAliveInterval;
- (void)_processDeviceConditionChanges;
- (void)cancelPollingIntervalOverride;
- (void)setKeepAliveOverrideOnInterface:(long long)a0 interval:(double)a1 timeout:(double)a2;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)a0;
- (void)_adjustMinimumIntervalFallback;
- (void)startManager;
- (void)_registerForDeviceConditionsNotifications;
- (void)_adjustInterfaceAssertions;
- (void)_resolveStateWithAction:(int)a0;
- (void)_pauseTimers;
- (void)_setTimerGuidance:(double)a0;

@end
