@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>

- (BOOL)isConditionRateLimited:(id)a0 onOperation:(long long)a1;
- (id)setupXPCConnection;
- (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanupExpiredConditionsInBuffer;
- (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)capped:(id)a0 to:(unsigned long long)a1;
- (BOOL)operationWithCondition:(id)a0 forType:(long long)a1;
- (void)initializeRateLimitingBuffer;

@end
