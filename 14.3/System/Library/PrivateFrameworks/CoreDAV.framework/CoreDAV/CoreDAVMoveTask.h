@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end
