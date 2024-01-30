@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MSConnection : NSObject {
    NSXPCConnection *_center;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (id)sharedConnection;

- (id)serverSideConfigurationForPersonID:(id)a0;
- (void)forgetPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (void)resume:(id)a0;
- (void).cxx_destruct;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (id)init;
- (id)pause;
- (void)deleteAssetCollections:(id)a0 personID:(id)a1;
- (void)resetServerStateForPersonID:(id)a0;
- (void)dealloc;
- (BOOL)enqueueAssetCollections:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)_waitForMessageToBeSent;
- (void)checkForOutstandingActivities;
- (void)handleSubscriptionPushForPersonID:(id)a0;
- (void)abortActivitiesForPersonID:(id)a0;
- (id)_machErrorWithUnderlyingError:(id)a0;

@end
