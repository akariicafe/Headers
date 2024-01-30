@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask

- (void)_onqueue_didFinishWithError:(id)a0;
- (void)_onqueue_didReceiveResponse:(id)a0;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
