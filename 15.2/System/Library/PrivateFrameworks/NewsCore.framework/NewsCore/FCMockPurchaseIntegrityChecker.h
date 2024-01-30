@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker>

@property (nonatomic) unsigned long long mockedCheckResult;

+ (id)mockPurchaseIntegrityCheckForSuccess;
+ (id)mockPurchaseIntegrityCheckForFailure;

- (void)isUserEntitledToSubscriptionForPurchaseID:(id)a0 completion:(id /* block */)a1;

@end
