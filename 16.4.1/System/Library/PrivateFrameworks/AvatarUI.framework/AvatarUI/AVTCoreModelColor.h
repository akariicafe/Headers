@class NSString, NSDictionary, AVTColorPreset;

@interface AVTCoreModelColor : NSObject <AVTCacheableResource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) AVTColorPreset *baseColorPreset;
@property (readonly, nonatomic) struct { long long destination; long long category; } settingKind;
@property (readonly, nonatomic) unsigned long long order;
@property (readonly, nonatomic, getter=canShowSlider) BOOL showSlider;
@property (readonly, nonatomic) float rangeMin;
@property (readonly, nonatomic) float rangeMax;
@property (readonly, copy, nonatomic) NSDictionary *derivedColorsByCategories;

- (id)thumbnail;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresEncryption;
- (id)copyForCategory:(long long)a0 destination:(long long)a1;
- (id)copyForPairedCategory:(long long)a0;
- (id)copyWithRangeMin:(float)a0 rangeMax:(float)a1 showSlider:(BOOL)a2;
- (unsigned long long)costForScope:(id)a0;
- (id)initWithColorPreset:(id)a0 settingKind:(struct { long long x0; long long x1; })a1 order:(unsigned long long)a2 derivedColorsByCategories:(id)a3;
- (id)initWithColorPreset:(id)a0 settingKind:(struct { long long x0; long long x1; })a1 order:(unsigned long long)a2 showSlider:(BOOL)a3 rangeMin:(float)a4 rangeMax:(float)a5 derivedColorsByCategories:(id)a6;
- (id)volatileIdentifierForScope:(id)a0;

@end
