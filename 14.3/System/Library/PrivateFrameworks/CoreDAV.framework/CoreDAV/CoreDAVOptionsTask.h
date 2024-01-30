@protocol CoreDAVOptionsTaskDelegate;

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVOptionsTaskDelegate> delegate;

- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
