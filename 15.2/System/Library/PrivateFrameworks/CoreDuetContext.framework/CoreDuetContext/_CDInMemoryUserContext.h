@class _CDInMemoryContext, NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *contexts;
@property (retain, nonatomic) NSMutableArray *pendingAllDeviceRegistrations;
@property (retain, nonatomic) _CDInMemoryContext *userContext;
@property (retain, nonatomic) NSString *localDeviceID;

+ (id)userContext;

- (id)valuesForKeyPaths:(id)a0 inContextsMatchingPredicate:(id)a1;
- (id)valuesForKeyPaths:(id)a0;
- (void)activateDevices:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1;
- (BOOL)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2;
- (id)localContext;
- (void)deactivateDevices:(id)a0 remoteUserContextProxySourceDeviceUUID:(id)a1;
- (BOOL)evaluatePredicate:(id)a0;
- (void)deregisterCallback:(id)a0;
- (void)registerCallback:(id)a0;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)a0;
- (BOOL)setObject:(id)a0 forContextualKeyPath:(id)a1;
- (id)unsafe_remoteDevices;
- (BOOL)addObjects:(id)a0 toArrayAtKeyPath:(id)a1;
- (id)lastModifiedDateForContextualKeyPath:(id)a0;
- (id)objectForContextualKeyPath:(id)a0;
- (BOOL)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1;
- (id)deviceWithDeviceID:(id)a0 fromDevices:(id)a1;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (id)propertiesForContextualKeyPath:(id)a0;
- (BOOL)unsafe_hasMultiDeviceRegistrations;
- (BOOL)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)namedDeviceIDsFromPredicate:(id)a0;
- (id)contextForKeyPath:(id)a0;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1 removedObjects:(id *)a2;
- (id)setObject:(id)a0 returningMetadataForContextualKeyPath:(id)a1;
- (id)unsafe_multiDeviceRegistrationsByDeviceID;
- (id)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 valueDidChange:(BOOL *)a3;
- (id)contextForDeviceWithDeviceID:(id)a0;
- (id)description;
- (id)allDeviceIDs;
- (id)unsafe_remoteDeviceIDs;
- (id)unsafe_remoteUserContextProxySourceDeviceUUIDs;
- (void).cxx_destruct;
- (id)unsafe_remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)a0;
- (id)init;
- (id)remoteDeviceIDs;
- (id)unsafe_contextForDeviceWithDeviceID:(id)a0;
- (id)unsafe_multiDeviceRegistrations;
- (void)setContextValue:(id)a0 forContextualKeyPath:(id)a1;
- (id)allDevices;
- (BOOL)hasMultiDeviceRegistrations;
- (id)unsafe_remoteDevicesByDeviceIDForRemoteUserContextProxySourceDeviceUUID:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)unsafe_remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)a0;

@end
