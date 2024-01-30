@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithURL:(id)a0;

@end
