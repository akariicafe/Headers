@class CADisplay, NSString, NSArray, NSUUID, CBCAManager, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBContainerProtocol, NightShiftSupportProtocol, CBBrightnessProxy;

@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol, CBDisplayModeProtocol> {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    NSArray *_allowlist;
    NSUUID *_displayContainerUUID;
    NSMutableArray *_missedProperties;
    NSMutableArray *_missedKeys;
    id<CBContainerModuleProtocol> _displayControlModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _autoBrightnessModule;
    id<CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> _harmonyContainer;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _edrControlModule;
    id<CBContainerModuleProtocol> _AODModule;
    id<CBContainerModuleProtocol> _SliderCommitTelemetryModule;
    unsigned int _displayService;
    BOOL _running;
    BOOL _builtIn;
    BOOL _isExternal;
    BOOL _alsServiceReady;
    unsigned long long _displayID;
    unsigned long long _registryID;
    NSString *_description;
    CADisplay *_display;
    id<CBBrightnessProxy> _brtCtl;
    unsigned int _armBacklightDisplayService;
    struct IONotificationPort { } *_displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)initialiseHIDDisplay;
- (BOOL)findBacklight;
- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)handleDisplayModeUpdate:(id)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)isReady;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)copyIdentifiers;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)initWithCBBrtControl:(id)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleDisplayArrival:(unsigned int)a0;
- (BOOL)createAndAddSliderCommitTelemetryModule;
- (id)className;
- (BOOL)matchDisplayWithHidService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setPropertyNoQueue:(id)a0 forKey:(id)a1;
- (void)tearDownInternalModules;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (void)handlePresetChange:(id)a0;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)dealloc;
- (BOOL)handleCBDisplayContainerStart;
- (id)initWithCADisplay:(id)a0;
- (void)setColorMitigations;
- (void)stop;
- (BOOL)setupInternalModules;
- (BOOL)handleCBBrtCtlDisplayContainerStart;
- (BOOL)start;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (id)initWithBacklightService:(unsigned int)a0;
- (id)copyStatusInfo;
- (void)unregisterNotificationBlock;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (void)setupInternalBrtCtlModules;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;

@end
