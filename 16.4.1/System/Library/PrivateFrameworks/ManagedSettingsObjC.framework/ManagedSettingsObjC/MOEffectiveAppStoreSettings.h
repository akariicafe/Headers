@class MOEffectiveBool, MOEffectiveInteger;

@interface MOEffectiveAppStoreSettings : NSObject

@property (readonly) MOEffectiveBool *denyInAppPurchases;
@property (readonly) MOEffectiveInteger *maximumRating;
@property (readonly) MOEffectiveBool *requirePasswordForPurchases;

@end
