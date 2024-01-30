@class NSXPCListener, NSString, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SCLSuppressSchoolModeAssertionManager : NSObject <NSXPCListenerDelegate, SCLSuppressSchoolModeAssertionClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) NSMutableSet *acquiredClients;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetQueue:(id)a0;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)clientDidInvalidate:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (void)performObserverBlock:(id /* block */)a0;
- (void)clientDidAcquireAssertion:(id)a0;

@end
