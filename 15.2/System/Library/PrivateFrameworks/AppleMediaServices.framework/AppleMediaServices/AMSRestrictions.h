@interface AMSRestrictions : NSObject

@property (class, readonly, nonatomic) BOOL allowAccountModifications;
@property (class, readonly, nonatomic) BOOL eroticaAllowed;
@property (class, readonly, nonatomic) BOOL explicitContentAllowed;
@property (class, readonly, nonatomic) BOOL inAppPurchaseAllowed;
@property (class, readonly, nonatomic) long long maximumMediaRank;
@property (class, readonly, nonatomic) BOOL onDeviceDiagnosticsAllowed;
@property (class, readonly, nonatomic, getter=isParentalControlEnabled) BOOL parentalControlEnabled;
@property (class, readonly, nonatomic) BOOL requirePasswordImmediately;

+ (BOOL)allowActiveAccountModifications;
+ (id)_featureNameForMediaType:(unsigned long long)a0;
+ (id)rankForMediaType:(unsigned long long)a0;

@end
