@class NWEntityMapperCoalitionWatcher, NWEntityMapperNEHelper, NWEntityMapperProcessWatcher, NSMutableDictionary, NWEntityMapperStaticAssignment, NSSet, AppStateHandler, NWEntityMapperDynamicLaunchServices, NWAppEventListener;

@interface NWUsageMonitor : NSObject {
    NWEntityMapperCoalitionWatcher *_coalitionUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentSymptomsUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentCommCenterUUIDMapper;
    NWEntityMapperNEHelper *_neHelperUUIDMapper;
    NWEntityMapperDynamicLaunchServices *_dynamicLaunchServicesUUIDMapper;
    NWEntityMapperProcessWatcher *_processWatcherUUIDMapper;
    BOOL _useSymptomsMapping;
    BOOL _useNEHelper;
    BOOL _useDynamicLaunchServices;
    BOOL _useCoalitionIDs;
    BOOL _useProcessNames;
    NSSet *_useNEHelperSet;
    NSSet *_appendProcNameSet;
    NSSet *_knownDaemonSet;
    NSMutableDictionary *_reportedLookupFailures;
    NWAppEventListener *_appEventListener;
    AppStateHandler *_appStateHandler;
}

@property (readonly) BOOL debugMode;
@property (readonly) BOOL hasAnyForegroundApp;

+ (void)initialize;
+ (id)getAppsWithStates;

- (void)configure:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)foregroundAppKeys;
- (unsigned int)currentStateForProcessWithPid:(int)a0;
- (id)processNameForUUID:(id)a0;
- (id)bestIdentifierForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4 derivation:(int *)a5;
- (id)allIdentifiersForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)processNameForUUIDString:(id)a0;
- (void)noteFailedLookupFor:(id)a0 processName:(char *)a1 pid:(int)a2;
- (void)invalidate;
- (id)stateDictionary;
- (void)noteUUID:(id)a0 forPid:(int)a1 procname:(char[64] *)a2;

@end
