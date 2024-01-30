@class NSString, NSMutableDictionary, CPLink, CPParticipant, NSObject;
@protocol OS_dispatch_queue, CPConnectionProviding, CPParticipantDelegate, CPLinkDelegate;

@interface CPParticipantController : NSObject <CPLinkDelegate, CPLinkProtocol> {
    NSObject<OS_dispatch_queue> *_networkQueue;
    NSMutableDictionary *_links;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    unsigned long long _connectionRetryCount;
    struct Fsm<States, States::Idle, Triggers> { struct map<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>, std::less<States>, std::allocator<std::pair<const States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>> { struct __tree<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>, std::allocator<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } transitionsMap; int currentState; struct function<void (States, States, Triggers)> { struct __value_func<void (States, States, Triggers)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _debug_fn; } fsm;
}

@property (weak, nonatomic) id<CPConnectionProviding> connectionProvider;
@property (weak, nonatomic) id<CPParticipantDelegate> delegate;
@property (weak, nonatomic) id<CPLinkDelegate> linkDelegate;
@property (readonly, nonatomic) CPParticipant *participant;
@property (readonly, nonatomic) CPLink *reliableLink;
@property (readonly, nonatomic) CPLink *unreliableLink;
@property (readonly, nonatomic) CPLink *reservedUnreliableLink;
@property (readonly, nonatomic) CPLink *reservedReliableLink;
@property (readonly, nonatomic) CPLink *modelSyncLink;
@property (nonatomic) unsigned int reliableLinkPriority;
@property (nonatomic) unsigned int unreliableLinkPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (void)_cleanup;
- (void)close;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)sendUnicastData:(id)a0 ofType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)didReceiveData:(id)a0 from:(id)a1;
- (void)didBecomeReady:(id)a0;
- (id)initWithParticipant:(id)a0 connectionProvider:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)notifyAppLaunch;
- (void)_initConnections;
- (void)_triggerAsyncFSMEvent:(int)a0 timeout:(unsigned long long)a1;
- (void)_dumpConnectionState;
- (BOOL)_allLinksReady;
- (void)_triggerAsyncFSMEvent:(int)a0;
- (void)setupLinkOfType:(unsigned char)a0 completion:(id /* block */)a1;
- (void)_onError:(id)a0;

@end
