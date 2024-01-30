@protocol CoreDAVTaskDelegate;

@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)initWithDataPayload:(id)a0 dataContentType:(id)a1 atURL:(id)a2 previousETag:(id)a3;

@end
