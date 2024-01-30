@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;
@property int listenerResumedToken;
@property BOOL interrupted;
@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *observers;
@property (getter=isInvalid) BOOL invalid;

+ (void)initialize;
+ (id)sharedManager;
+ (id)unlockInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)xpcManagerInterface;

- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupConnection;
- (void)streamsForMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)remoteHotspotSessionForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)registerObserver:(id)a0;
- (void)appleAccountSignedOut;
- (void)dealloc;
- (void)unlockManagerWithCompletionHandler:(id /* block */)a0;
- (void)serviceManagerProxyForIdentifier:(id)a0 client:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)unregisterObserver:(id)a0;
- (void)notifyOfInvalidation;
- (id)init;
- (void)appleAccountSignedIn;
- (void)notifyOfInterruption;
- (void)notifyOfResume;
- (void).cxx_destruct;

@end
