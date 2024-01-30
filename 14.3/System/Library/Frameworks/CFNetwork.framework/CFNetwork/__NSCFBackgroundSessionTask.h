@class NSString, NSError;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {
    BOOL _sentCancel;
    BOOL _sentDidFinish;
    NSError *_immediateError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timingData;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)a0;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)a0 withCompletion:(id /* block */)a1;
- (void)_onqueue_adjustLoadingPoolPriority;
- (id)initWithTaskInfo:(id)a0 taskGroup:(id)a1 ident:(unsigned long long)a2;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)_onqueue_didReceiveResponse:(id)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustPriorityHint:(float)a0 incremental:(BOOL)a1;
- (id)initWithBackgroundTask:(id)a0;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)setTaskDescription:(id)a0;
- (void)set_discretionaryOverride:(long long)a0;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;
- (void)dealloc;
- (void)_onqueue_suspend;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)a0;

@end
