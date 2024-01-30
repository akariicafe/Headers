@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MSConnection : NSObject {
    NSXPCConnection *_center;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (id)sharedConnection;

- (void)resume:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)pause;
- (void)forgetPersonID:(id)a0;
- (void)deleteAssetCollections:(id)a0 personID:(id)a1;
- (void)resetServerStateForPersonID:(id)a0;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (BOOL)enqueueAssetCollections:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)_waitForMessageToBeSent;
- (void)checkForOutstandingActivities;
- (void)handleSubscriptionPushForPersonID:(id)a0;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)abortActivitiesForPersonID:(id)a0;
- (id)_machErrorWithUnderlyingError:(id)a0;

@end
