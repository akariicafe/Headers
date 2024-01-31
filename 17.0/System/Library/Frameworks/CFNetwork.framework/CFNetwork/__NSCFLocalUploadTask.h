@class NSString;

@interface __NSCFLocalUploadTask : __NSCFLocalDataTask <NSURLSessionUploadTaskSubclass> {
    BOOL _startedProducingResumeData;
}

@property (copy) id /* block */ resumeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_task_onqueue_didFinish;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (void)_onqueue_cancelByProducingResumeData:(id /* block */)a0;
- (void)dealloc;
- (id)initWithResumeData:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;
- (BOOL)isKindOfClass:(Class)a0;

@end
