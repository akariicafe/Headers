@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)killSystemTimer;
- (id)systemTimer;
- (id /* block */)timeoutBlock;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (id)responseHandler;

@end
