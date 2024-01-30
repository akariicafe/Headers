@class NSDictionary, NSString;

@interface IMMessagePartSyndicationAssetDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *assetSyndications;
@property (readonly, nonatomic) NSString *serializedString;

+ (id)descriptorFromSerializedString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)removeSyndicationAssetsInfoFor:(long long)a0;
- (id)initWithAssetSyndications:(id)a0;
- (void)replaceSyndicationAssetsInfoWith:(id)a0 asset:(long long)a1;
- (id)syndicationForPartIndex:(unsigned long long)a0 asset:(long long)a1;
- (void)updateSyndicationAssetWithInfo:(id)a0 asset:(long long)a1;

@end
