@protocol CoreDAVOptionsTaskDelegate;

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVOptionsTaskDelegate> delegate;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;

@end
