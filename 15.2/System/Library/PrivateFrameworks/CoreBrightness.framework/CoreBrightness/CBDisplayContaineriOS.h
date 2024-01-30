@class CADisplay, NSString, NSArray, NSUUID, CBCAManager, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBContainerProtocol, NightShiftSupportProtocol, CBBrightnessProxy;

@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol> {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    NSArray *_whitelist;
    NSUUID *_displayContainerUUID;
    id<CBContainerModuleProtocol> _displayControlModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _autoBrightnessModule;
    id<CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> _harmonyContainer;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _edrControlModule;
    unsigned int _displayService;
    BOOL _running;
    BOOL _builtIn;
    unsigned long long _displayID;
    unsigned long long _registryID;
    NSString *_description;
    CADisplay *_display;
    id<CBBrightnessProxy> _brtCtl;
    struct IONotificationPort { } *_displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)className;
- (id)copyIdentifiers;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)initialiseHIDDisplay;
- (id)initWithCBBrtControl:(id)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (id)initWithBacklightService:(unsigned int)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithCADisplay:(id)a0;
- (void)tearDownInternalModules;
- (void)unregisterNotificationBlock;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)start;
- (BOOL)setupInternalModules;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (BOOL)matchDisplayWithHidService:(struct __IOHIDServiceClient { } *)a0;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (BOOL)handleCBDisplayContainerStart;
- (BOOL)findBacklight;
- (BOOL)handleDisplayArrival:(unsigned int)a0;
- (void)dealloc;
- (id)copyStatusInfo;
- (BOOL)handleCBBrtCtlDisplayContainerStart;
- (void)stop;

@end
