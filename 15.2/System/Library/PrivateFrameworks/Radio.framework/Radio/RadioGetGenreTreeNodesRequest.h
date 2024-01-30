@class SSURLConnectionRequest, SSMetricsPageEvent, SSMetricsConfiguration;

@interface RadioGetGenreTreeNodesRequest : RadioRequest {
    unsigned long long _parentNodeID;
    SSURLConnectionRequest *_request;
}

@property (readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent;

+ (id)responseContentKey;
+ (id)fallbackRequestPath;
+ (id)requestBagKey;
+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)initWithParentNodeID:(unsigned long long)a0;
- (void)startWithCachedCompletionHandler:(id /* block */)a0 networkCompletionHandler:(id /* block */)a1;
- (id)_genreTreeByApplyingResponse:(id)a0;

@end
