@protocol CoreDAVTaskDelegate;

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;

- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2;

@end
