@class SSRequest, NSString, NSTimer;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate> {
    id /* block */ _completionBlock;
    NSTimer *_timeoutTimer;
}

@property (readonly, retain, nonatomic) SSRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_timerDidFire:(id)a0;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)requestDidFinish:(id)a0;
- (void)_startTimeout:(double)a0 completionBlock:(id /* block */)a1;

@end
