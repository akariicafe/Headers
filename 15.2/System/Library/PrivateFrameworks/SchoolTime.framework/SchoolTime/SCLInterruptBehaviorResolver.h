@class NSXPCListener, CNContactStore, NSString, SCLState, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SCLInterruptBehaviorResolver : NSObject <SCLInterruptBehaviorResolutionXPCServer, NSXPCListenerDelegate, SCLSchoolModeServerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) SCLState *currentState;
@property (retain, nonatomic) NSMutableArray *resolutionRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetQueue:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (oneway void)resolveBehaviorForEvent:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)server:(id)a0 didUpdateState:(id)a1 fromState:(id)a2;
- (BOOL)_isEntitledWithClientIdentifier:(id)a0;
- (id)_resolveInterruptBehaviorForEvent:(id)a0 date:(id)a1 clientIdentifier:(id)a2;
- (BOOL)_isEmergencyBypassEnabledForContact:(id)a0;
- (BOOL)_isRepeatSender:(id)a0 date:(id)a1 clientIdentifier:(id)a2;
- (void)_addResolutionRecord:(id)a0;

@end
