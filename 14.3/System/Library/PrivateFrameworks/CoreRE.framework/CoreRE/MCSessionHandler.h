@class MCSession, NSMutableDictionary, NSString, NSMutableArray, NSLock;
@protocol MCSessionPrivateDelegate;

@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate>

@property (nonatomic) struct MultipeerProtocolLayer { void /* function */ **x0; struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x1; struct SharedPtr<re::internal::WeakCount> { struct WeakCount *x0; } x2; struct Allocator *x3; struct ProtocolLayerListener *x4; struct PacketPool *x5; struct ObjCObject { id x0; } x6; struct ObjCObject { id x0; } x7; struct Address { struct DynamicString { struct Allocator *x0; char *x1; unsigned long long x2; unsigned long long x3; } x0; } x8; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; } *protocolLayer;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) NSMutableDictionary *peersToHandles;
@property (retain, nonatomic) NSMutableArray *pendingData;
@property (retain, nonatomic) NSLock *handlesLock;
@property (nonatomic) struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> > { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct SharedPtr<(anonymous namespace)::MCProtocolHandle> *m_data; } handles;
@property (nonatomic) struct DynamicArray<unsigned char> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; char *m_data; } tempBuf;
@property (weak, nonatomic) id<MCSessionPrivateDelegate> nextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4 propagate:(BOOL *)a5;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3 propagate:(BOOL *)a4;
- (id)initWithSession:(id)a0 protocolLayer:(struct MultipeerProtocolLayer { void /* function */ **x0; struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x1; struct SharedPtr<re::internal::WeakCount> { struct WeakCount *x0; } x2; struct Allocator *x3; struct ProtocolLayerListener *x4; struct PacketPool *x5; struct ObjCObject { id x0; } x6; struct ObjCObject { id x0; } x7; struct Address { struct DynamicString { struct Allocator *x0; char *x1; unsigned long long x2; unsigned long long x3; } x0; } x8; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; } *)a1;
- (id)dataForPacket:(const struct Packet { struct atomic<re::Packet *> { struct __cxx_atomic_impl<re::Packet *, std::__1::__cxx_atomic_base_impl<re::Packet *> > { _Atomic struct Packet *x0; } x0; } x0; void *x1; void *x2; unsigned int x3; unsigned int x4; int x5; void *x6; struct Packet *x7; } *)a0 channel:(unsigned char)a1;

@end
