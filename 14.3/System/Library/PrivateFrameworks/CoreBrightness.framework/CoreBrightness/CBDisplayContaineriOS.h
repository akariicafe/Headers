@class CADisplay, NSString, NSArray, NSUUID, CBCAManager, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBContainerProtocol, NightShiftSupportProtocol;

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
    struct IONotificationPort { } *_displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupInternalModules;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)initialiseHIDDisplay;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (id)initWithBacklightService:(unsigned int)a0;
- (void)dealloc;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (void)stop;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)findBacklight;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)initWithCADisplay:(id)a0;
- (void)tearDownInternalModules;
- (BOOL)handleDisplayArrival:(unsigned int)a0;
- (BOOL)start;
- (id)copyStatusInfo;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)unregisterNotificationBlock;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyIdentifiers;
- (BOOL)matchDisplayWithHidService:(struct __IOHIDServiceClient { } *)a0;

@end
