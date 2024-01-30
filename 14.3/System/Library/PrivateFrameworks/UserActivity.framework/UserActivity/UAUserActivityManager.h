@class NSMutableSet, NSUUID, NSMapTable, NSSet, NSXPCConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {
    NSXPCConnection *_connection;
    BOOL _connectionInitializationSucceeded;
    BOOL _activityContinuationIsEnabled;
    NSMutableSet *_userActivityUUIDsSendToServer;
}

@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (copy) NSUUID *activeUserActivityUUID;
@property (retain) NSMapTable *userActivitiesByUUID;
@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (readonly, copy) NSSet *userActivityUUIDsSendToServer;
@property BOOL needToSendInitialMessage;
@property BOOL registeredForAppResignationMessages;
@property (readonly) NSXPCConnection *connection;
@property (readonly) BOOL supportsActivityContinuation;
@property (readonly) BOOL activityContinuationIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dontConnectToServer;
+ (BOOL)userActivityContinuationSupported;
+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)a0 dynamicType:(id)a1 kind:(unsigned long long)a2 teamIdentifier:(id)a3;
+ (id)defaultManager;
+ (BOOL)shouldSupportActivityContinuation;

- (id)activities;
- (id)encodeUserActivity:(id)a0;
- (void)tellClientUserActivityItWasResumed:(id)a0;
- (id)userActivityForUUID:(id)a0;
- (void)removeUserActivity:(id)a0;
- (id)init;
- (void)sendInitialMessage:(BOOL)a0;
- (void).cxx_destruct;
- (void)askClientUserActivityToSave:(id)a0 completionHandler:(id /* block */)a1;
- (void)addUserActivity:(id)a0;
- (void)sendToIndexerIfAppropriate:(id)a0 force:(BOOL)a1;
- (void)dealloc;
- (void)registerForApplicationDeactivateIfNecessary;
- (BOOL)registerAsProxyForApplication:(int)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (id)createByDecodingUserActivity:(id)a0;
- (void)connectionInterrupted;
- (void)didReceiveInputStreamWithUUID:(id)a0 inputStream:(id)a1 outputStream:(id)a2;
- (id)initWithConnection:(id)a0;
- (void)sendCurrentActivityToIndexer:(id)a0;
- (void)addDynamicUserActivity:(id)a0 matching:(id)a1;
- (void)makeActive:(id)a0;
- (BOOL)determineIfUserActivityIsCurrent:(id)a0 completionHandler:(id /* block */)a1;
- (id)activeActivitiesByPriority;
- (BOOL)userActivityIsActive:(id)a0;
- (void)tellClientDebuggingEnabled:(BOOL)a0 logFileHandle:(id)a1;
- (void)askClientUserActivityToSave:(id)a0;
- (id)fetchUUID:(id)a0 intervalToWaitForDocumentSynchonization:(double)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeDynamicUserActivity:(id)a0 matching:(id)a1;
- (void)markUserActivityAsDirty:(id)a0 forceImmediate:(BOOL)a1;
- (void)sendUserActivityInfoToLSUserActivityd:(id)a0 makeCurrent:(BOOL)a1;
- (BOOL)currentUserActivityUUIDWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)pinUserActivity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)makeInactive:(id)a0;
- (BOOL)hasUserActivityWithUUID:(id)a0;
- (void)tellDaemonAboutNewLSUserActivity:(id)a0;

@end
