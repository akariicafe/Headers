@class NSArray, NSObject;
@protocol SpotlightReceiver;

@interface CSReceiverConnection : CSXPCConnection

@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<SpotlightReceiver> *receiver;
@property (copy, nonatomic) NSArray *bundleIDs;
@property (copy, nonatomic) NSArray *contentTypes;
@property (copy, nonatomic) NSArray *INIntentClassNames;

- (int)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (int)handleSetup:(id)a0;
- (int)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (int)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (int)deleteFromBundle:(id)a0 sinceDate:(id)a1 domains:(id)a2 deletes:(id)a3;
- (int)deleteAllUserActivities:(id)a0;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (int)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;
- (int)addInteraction:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)donateRelevantShortcuts:(id)a0 bundleID:(id)a1;
- (id)initWithReceiver:(id)a0 forServiceName:(id)a1;
- (int)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (int)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void).cxx_destruct;

@end
