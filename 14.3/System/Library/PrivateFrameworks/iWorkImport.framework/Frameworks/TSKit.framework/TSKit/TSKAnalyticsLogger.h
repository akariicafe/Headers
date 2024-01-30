@class NSString;

@interface TSKAnalyticsLogger : NSObject

@property (copy, nonatomic) NSString *baseDomain;
@property (copy, nonatomic) NSString *cachedFullDomain;
@property (nonatomic) BOOL recalculateDomain;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL canLogAnalytics;

+ (void)sendEventInDomain:(id)a0 lazily:(BOOL)a1 eventPayload:(id)a2;
+ (id)loggerWithDomain:(id)a0;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)canLogAnalytics;
- (void)sendEventLazily:(BOOL)a0 eventPayload:(id)a1;
- (void)p_loadCoreAnalyticsIfNeeded;
- (id)p_eventPayloadFromPayload:(id)a0;

@end
