@class NSString;

@interface PXAssetVariationOption : NSObject <NSCopying>

@property (readonly, nonatomic) long long variationType;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isRecommended) BOOL recommended;
@property (readonly, nonatomic, getter=isCurrent) BOOL current;

+ (id)variationOptionWithType:(long long)a0 recommended:(BOOL)a1 current:(BOOL)a2;
+ (id)_localizedNameForVariationType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToVariationOption:(id)a0;

@end
