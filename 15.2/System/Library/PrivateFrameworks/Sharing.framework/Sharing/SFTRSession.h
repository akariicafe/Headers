@class TRSession, NSMutableDictionary, SFSession, NSObject, TRAnisetteDataHandler;
@protocol OS_dispatch_queue;

@interface SFTRSession : NSObject {
    BOOL _activateCalled;
    TRAnisetteDataHandler *_anisetteDataHandler;
    BOOL _invalidateCalled;
    NSMutableDictionary *_handlerMap;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFSession *session;
@property (readonly, nonatomic) TRSession *trSession;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (copy, nonatomic) id /* block */ sendEventImpHandler;
@property (copy, nonatomic) id /* block */ sendRequestImpHandler;

- (void)sendEvent:(id)a0;
- (void)_cleanup;
- (void)handleEvent:(id)a0 flags:(unsigned int)a1;
- (void)handleRequest:(id)a0 flags:(unsigned int)a1 responseHandler:(id /* block */)a2;
- (void)disconnect;
- (id)_decodeTRMessageData:(id)a0 kindOfClass:(Class)a1;
- (void)setEventHandler:(id /* block */)a0 forEventClass:(Class)a1;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)setRequestHandler:(id /* block */)a0 forRequestClass:(Class)a1;
- (void)invalidate;
- (void)dealloc;

@end
