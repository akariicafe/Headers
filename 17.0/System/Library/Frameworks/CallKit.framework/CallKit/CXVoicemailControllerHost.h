@class NSXPCListener, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, CXVoicemailControllerHostDelegate;

@interface CXVoicemailControllerHost : NSObject <NSXPCListenerDelegate, CXVoicemailControllerHostConnectionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXVoicemailControllerHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableDictionary *voicemailUUIDToVoicemailMap;
@property (retain, nonatomic) NSMutableSet *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_performDelegateCallback:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)_voicemailsForVoicemailControllerHostConnection:(id)a0;
- (void)addOrUpdateVoicemails:(id)a0;
- (id)initWithVoicemails:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)removeVoicemails:(id)a0;
- (void)voicemailControllerHostConnection:(id)a0 requestTransaction:(id)a1 completion:(id /* block */)a2;
- (void)voicemailControllerHostConnection:(id)a0 requestVoicemails:(id /* block */)a1;
- (void)voicemailControllerHostConnectionInvalidated:(id)a0;

@end
