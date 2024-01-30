@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) BOOL forceNoCache;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
