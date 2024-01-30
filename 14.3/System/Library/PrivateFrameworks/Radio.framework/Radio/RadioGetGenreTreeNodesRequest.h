@class SSURLConnectionRequest, SSMetricsPageEvent, SSMetricsConfiguration;

@interface RadioGetGenreTreeNodesRequest : RadioRequest {
    unsigned long long _parentNodeID;
    SSURLConnectionRequest *_request;
}

@property (readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent;

+ (id)requestBagKey;
+ (id)fallbackRequestPath;
+ (id)responseContentKey;
+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)initWithParentNodeID:(unsigned long long)a0;
- (id)_genreTreeByApplyingResponse:(id)a0;
- (void)startWithCachedCompletionHandler:(id /* block */)a0 networkCompletionHandler:(id /* block */)a1;

@end
