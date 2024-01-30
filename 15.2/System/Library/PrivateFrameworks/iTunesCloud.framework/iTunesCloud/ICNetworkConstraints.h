@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {
    BOOL _dataAllowedFallbackValue;
    BOOL _cellularDataAllowedFallbackValue;
    BOOL _wiFiDataAllowedFallbackValue;
    NSMutableDictionary *_networkTypeToDataAllowed;
    NSMutableDictionary *_networkTypeToSizeLimit;
}

+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)a0;
+ (id)constraintsForSystemApplicationType:(long long)a0;

- (id)sizeLimitForNetworkType:(long long)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldAllowDataForCellularNetworkTypes;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldAllowDataForNetworkType:(long long)a0;
- (unsigned long long)hash;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (BOOL)shouldAllowDataForWiFiNetworkTypes;

@end
