@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (id)responseHandler;
- (id)systemTimer;
- (void).cxx_destruct;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (id /* block */)timeoutBlock;
- (void)dealloc;
- (void)killSystemTimer;

@end
