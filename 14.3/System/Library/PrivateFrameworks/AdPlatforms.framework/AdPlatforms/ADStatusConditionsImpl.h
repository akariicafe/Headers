@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>

- (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (id)setupXPCConnection;
- (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isConditionRateLimited:(id)a0 onOperation:(long long)a1;
- (void)initializeRateLimitingBuffer;
- (void)cleanupExpiredConditionsInBuffer;
- (BOOL)operationWithCondition:(id)a0 forType:(long long)a1;
- (id)capped:(id)a0 to:(unsigned long long)a1;

@end
