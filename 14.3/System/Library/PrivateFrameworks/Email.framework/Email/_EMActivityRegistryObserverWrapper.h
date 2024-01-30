@class NSArray, EMActivityRegistry, NSString, NSMutableDictionary, EMRemoteConnection;
@protocol EMActivityObserver, EFCancelable;

@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc> {
    id<EFCancelable> _observerCancelable;
    NSMutableDictionary *_trackedActivities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) EMRemoteConnection *connection;
@property (weak) EMActivityRegistry *registry;
@property (weak) id<EMActivityObserver> observer;
@property (retain) NSArray *activities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_resetWithCancelable:(id)a0;
- (void)_startObservingIfNecessary;
- (id)activityWithObjectID:(id)a0;
- (void)startedActivity:(id)a0;
- (void)activityWithID:(id)a0 setUserInfoObject:(id)a1 forKey:(id)a2;
- (void)activityWithID:(id)a0 setCompletedCount:(id)a1 totalCount:(id)a2;
- (void)activityWithID:(id)a0 finishedWithError:(id)a1;
- (void)removedActivityWithID:(id)a0;
- (id)initWithConnection:(id)a0 registry:(id)a1 observer:(id)a2;
- (void)_recover;

@end
