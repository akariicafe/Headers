@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVCopyTaskDelegate> delegate;

- (id)httpMethod;
- (BOOL)validate:(id *)a0;
- (void)dealloc;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end
