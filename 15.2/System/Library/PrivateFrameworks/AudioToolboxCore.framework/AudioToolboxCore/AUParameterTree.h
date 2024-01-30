@class NSXPCConnection, AUAudioUnit_XH, NSObject;
@protocol OS_dispatch_queue;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding> {
    struct shared_ptr<AUObserverController> { struct AUObserverController *__ptr_; struct __shared_weak_count *__cntrl_; } _observerController;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct vector<AddressToParameter, std::allocator<AddressToParameter>> { struct AddressToParameter *__begin_; struct AddressToParameter *__end_; struct __compressed_pair<AddressToParameter *, std::allocator<AddressToParameter>> { struct AddressToParameter *__value_; } __end_cap_; } addrToParamIndex;
@property (nonatomic) int _autoCreatedForV2AU;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *valueAccessQueue;
@property (weak, nonatomic) AUAudioUnit_XH *_auXH;
@property (nonatomic) int numRecorders;
@property (nonatomic) struct AURemoteParameterObserver { } *remoteObserverToken;
@property (nonatomic) struct AURemoteParameterObserver { } *remoteRecorderToken;
@property (weak, nonatomic) NSXPCConnection *remoteParameterSynchronizerXPCConnection;

+ (id)createParameterWithIdentifier:(id)a0 name:(id)a1 address:(unsigned long long)a2 min:(float)a3 max:(float)a4 unit:(unsigned int)a5 unitName:(id)a6 flags:(unsigned int)a7 valueStrings:(id)a8 dependentParameters:(id)a9;
+ (id)createGroupTemplate:(id)a0;
+ (id)createTreeWithChildren:(id)a0;
+ (id)createGroupWithIdentifier:(id)a0 name:(id)a1 children:(id)a2;
+ (id)createGroupFromTemplate:(id)a0 identifier:(id)a1 name:(id)a2 addressOffset:(unsigned long long)a3;

- (void *)observerController;
- (id)parameterWithAddress:(unsigned long long)a0;
- (id)initWithChildren:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)parameterWithID:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (void).cxx_destruct;
- (void)_checkInitTreeObservation;
- (id)initWithCoder:(id)a0;
- (void)remoteSyncParameter:(unsigned long long)a0 value:(float)a1 extOriginator:(unsigned long long)a2 hostTime:(unsigned long long)a3 eventType:(unsigned int)a4;
- (void)dealloc;
- (void)_init2;
- (id).cxx_construct;

@end
