@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker>

@property (nonatomic) unsigned long long mockedCheckResult;

+ (id)mockPurchaseIntegrityCheckForFailure;
+ (id)mockPurchaseIntegrityCheckForSuccess;

- (void)isUserEntitledToSubscriptionForPurchaseID:(id)a0 completion:(id /* block */)a1;

@end
