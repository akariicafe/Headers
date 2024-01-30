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

- (void)_cleanup;
- (void)disconnect;
- (void)sendEvent:(id)a0;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)setRequestHandler:(id /* block */)a0 forRequestClass:(Class)a1;
- (id)_decodeTRMessageData:(id)a0 kindOfClass:(Class)a1;
- (void)handleEvent:(id)a0 flags:(unsigned int)a1;
- (void)handleRequest:(id)a0 flags:(unsigned int)a1 responseHandler:(id /* block */)a2;
- (void)setEventHandler:(id /* block */)a0 forEventClass:(Class)a1;

@end
