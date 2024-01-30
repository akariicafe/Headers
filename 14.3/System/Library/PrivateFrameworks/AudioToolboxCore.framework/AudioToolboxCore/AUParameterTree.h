@class NSXPCConnection, AUAudioUnit_XH, NSObject;
@protocol OS_dispatch_queue;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding> {
    struct shared_ptr<AUObserverController> { struct AUObserverController *__ptr_; struct __shared_weak_count *__cntrl_; } _observerController;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct vector<AddressToParameter, std::__1::allocator<AddressToParameter> > { struct AddressToParameter *__begin_; struct AddressToParameter *__end_; struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter> > { struct AddressToParameter *__value_; } __end_cap_; } addrToParamIndex;
@property (nonatomic) int _autoCreatedForV2AU;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *valueAccessQueue;
@property (weak, nonatomic) AUAudioUnit_XH *_auXH;
@property (nonatomic) int numRecorders;
@property (nonatomic) struct AURemoteParameterObserver { } *remoteObserverToken;
@property (nonatomic) struct AURemoteParameterObserver { } *remoteRecorderToken;
@property (weak, nonatomic) NSXPCConnection *remoteParameterSynchronizerXPCConnection;

+ (id)createGroupTemplate:(id)a0;
+ (id)createParameterWithIdentifier:(id)a0 name:(id)a1 address:(unsigned long long)a2 min:(float)a3 max:(float)a4 unit:(unsigned int)a5 unitName:(id)a6 flags:(unsigned int)a7 valueStrings:(id)a8 dependentParameters:(id)a9;
+ (id)createTreeWithChildren:(id)a0;
+ (id)createGroupWithIdentifier:(id)a0 name:(id)a1 children:(id)a2;
+ (id)createGroupFromTemplate:(id)a0 identifier:(id)a1 name:(id)a2 addressOffset:(unsigned long long)a3;

- (void).cxx_destruct;
- (void)_init2;
- (void)_checkInitTreeObservation;
- (id)initWithChildren:(id)a0;
- (struct AUObserverController { struct weak_ptr<AUObserverController> { struct AUObserverController *x0; struct __shared_weak_count *x1; } x0; id x1; id x2; struct CAEventReceiver { struct shared_ptr<CAEventReceiver::Impl> { struct Impl *x0; struct __shared_weak_count *x1; } x0; } x3; BOOL x4; struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<AUObserverController::AddressOriginator, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<AUObserverController::AddressOriginator> > { unsigned long long x0; } x2; } x0; } x5; struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent *x0; struct ParameterAutomationEvent *x1; struct __compressed_pair<ParameterAutomationEvent *, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent *x0; } x2; } x6; } *)observerController;
- (void)remoteSyncParameter:(unsigned long long)a0 value:(float)a1 extOriginator:(unsigned long long)a2 hostTime:(unsigned long long)a3 eventType:(unsigned int)a4;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)parameterWithAddress:(unsigned long long)a0;
- (id)parameterWithID:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (void)encodeWithCoder:(id)a0;

@end
