@class NSString;

@interface FCBundleEntitlementsProviderResult : NSObject

@property (readonly, nonatomic) NSString *bundlePurchaseID;
@property (readonly, nonatomic) NSString *servicesBundlePurchaseID;
@property (readonly, nonatomic) BOOL inTrialPeriod;
@property (readonly, nonatomic) BOOL isPurchaser;
@property (readonly, nonatomic) BOOL isAmplifyUser;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundlePurchaseID:(id)a0 inTrialPeriod:(BOOL)a1 isPurchaser:(BOOL)a2 servicesBundlePurchaseID:(id)a3 isAmplifyUser:(BOOL)a4;

@end
