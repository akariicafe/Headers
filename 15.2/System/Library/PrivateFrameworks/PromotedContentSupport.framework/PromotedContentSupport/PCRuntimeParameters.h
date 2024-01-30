@interface PCRuntimeParameters : NSObject

+ (void)clientHandlesImpressionTracking:(BOOL)a0;
+ (void)rateLimitRequests:(float)a0;
+ (void)setContextPrefetchLimit:(long long)a0;
+ (long long)contextPrefetchLimit;
+ (void)rateLimitRequestsInFeed:(float)a0 inArticle:(float)a1 betweenArticle:(float)a2 videoInArticle:(float)a3 nativeInFeed:(float)a4 nativeInArticle:(float)a5;

@end
