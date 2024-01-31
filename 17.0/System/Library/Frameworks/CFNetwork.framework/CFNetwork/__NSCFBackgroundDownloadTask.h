@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (void)_onqueue_didReceiveResponse:(id)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
