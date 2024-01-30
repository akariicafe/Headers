@class NSString, NSXPCConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DDRResetService : NSObject <DDRClientResetProtocol, DDRClientObserverProtocol>

@property (retain, nonatomic) NSXPCConnection *dataResetXPCConnection;
@property (retain, nonatomic) NSXPCConnection *observerNonLaunchingXPCConnection;
@property (nonatomic) int currentResetState;
@property (retain, nonatomic) NSHashTable *obervers;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sync;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)willBeginDataResetWithMode:(long long)a0;
- (void)didBeginDataResetWithMode:(long long)a0;
- (void)notifyClientsOfResetFailedWithErrorCode:(long long)a0;
- (void)resetWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)addOberver:(id)a0;
- (void)didCompleteDataResetMode:(long long)a0 withError:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;

@end
