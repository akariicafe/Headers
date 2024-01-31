@class NSURL;

@interface __NSCFBackgroundUploadTask : __NSCFBackgroundDataTask {
    NSURL *_uploadFile;
}

- (void)cancelByProducingResumeData:(id /* block */)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;

@end
