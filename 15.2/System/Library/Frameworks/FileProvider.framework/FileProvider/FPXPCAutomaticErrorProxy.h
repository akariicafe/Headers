@class Protocol, NSString, NSError, NSObject;
@protocol NSXPCProxyCreating;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy> {
    NSObject<NSXPCProxyCreating> *_target;
    Protocol *_protocol;
    NSError *_error;
    id /* block */ _requestWillBeginBlock;
    NSString *_name;
    id _retainSelfWhileMessageIsPending;
    BOOL _isSynchronous;
    _Atomic unsigned long long _retainCounter;
}

@property (nonatomic) int requestEffectivePid;

+ (BOOL)sanitizeErrors;

- (void)_requestDidFinish:(id)a0 requestDidFinishBlock:(id /* block */)a1;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)synchronousRemoteObjectProxy;
- (id)description;
- (id)initWithConnection:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4 requestWillBegin:(id /* block */)a5;
- (id /* block */)_requestWillBegin:(SEL)a0 requestID:(id)a1;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4 requestWillBegin:(id /* block */)a5 requestDidFinish:(id /* block */)a6;
- (void)forwardInvocation:(id)a0;
- (id)initWithRemoteObjectProxy:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4 requestWillBegin:(id /* block */)a5;
- (BOOL)conformsToProtocol:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4;

@end
