@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVCopyTaskDelegate> delegate;

- (void)dealloc;
- (id)httpMethod;
- (BOOL)validate:(id *)a0;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end
