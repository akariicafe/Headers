@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;

- (unsigned long long)cachePolicy;
- (void).cxx_destruct;
- (id)requestBody;
- (id)description;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;

@end
