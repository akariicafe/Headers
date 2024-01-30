@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DRSubscriptionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSMutableDictionary *perTeamIdMonitors;
@property (readonly, nonatomic) NSMutableDictionary *perTeamIdConfigState;
@property (readonly, nonatomic) NSMutableSet *inFlightSubscriptionRequests;

+ (id)sharedInstance;

- (void)addMonitor:(id)a0;
- (void)_processNewEvent:(id)a0;
- (void)_completeSubscriptionRequestForTeamID:(id)a0 config:(id)a1 event:(id)a2;
- (id)_configFromEvent:(id)a0 teamIdOut:(id *)a1;
- (void)_unsubscribeFromStreamWithTeamID:(id)a0;
- (void)_requestSubscriptionToTeamIDStream:(id)a0;
- (BOOL)_hasInitializedSubscriptionForTeamID:(id)a0 cachedConfigOut:(id *)a1 errorOut:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)removeMonitor:(id)a0;
- (void)_broadcastErrorForTeamID:(id)a0 error:(id)a1;

@end
