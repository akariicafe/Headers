@class NSString;

@interface ATAssetLinkPowerLoggerAggregationKey : NSObject <NSCopying>

@property (readonly) long long linkType;
@property (readonly) NSString *dataclass;
@property (readonly) NSString *assetType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLinkType:(long long)a0 dataclass:(id)a1 assetType:(id)a2;

@end
