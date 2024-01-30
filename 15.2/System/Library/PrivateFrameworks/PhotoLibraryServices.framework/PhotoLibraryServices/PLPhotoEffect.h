@class NSString;

@interface PLPhotoEffect : NSObject

@property (readonly, copy, nonatomic) NSString *filterIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *CIFilterName;
@property (readonly, nonatomic) long long latestVersion;
@property (readonly, nonatomic) long long lightingVersion;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) BOOL isLegacy;

+ (id)effectWithCIFilterName:(id)a0;
+ (id)_legacyEffectWithIdentifier:(id)a0 CIFilterName:(id)a1;
+ (id)_effectWithIdentifier:(id)a0 CIFilterName:(id)a1 displayName:(id)a2;
+ (id)_lightingEffectWithIdentifier:(id)a0 CIFilterName:(id)a1 lightingVersion:(long long)a2;
+ (id)standardSupportedEffects;
+ (id)allSupportedEffects;
+ (BOOL)isEffectNoneForIdentifier:(id)a0;
+ (BOOL)isEffectWithIdentifier:(id)a0 equalToEffectWithIdentifier:(id)a1;
+ (unsigned long long)_indexOfEffectWithIdentifier:(id)a0;
+ (id)effectWithIdentifier:(id)a0;
+ (id)allEffects;

- (id)newEffectFilter;
- (id)description;
- (void).cxx_destruct;

@end
