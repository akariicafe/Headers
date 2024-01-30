@class NSDictionary;

@interface AXMVisionFeatureFaceAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *results;
@property (readonly, nonatomic) long long ageCategory;
@property (readonly, nonatomic) long long genderCategory;
@property (readonly, nonatomic) long long eyesCategory;
@property (readonly, nonatomic) long long smilingCategory;
@property (readonly, nonatomic) long long faceHairCategory;
@property (readonly, nonatomic) long long hairColorCategory;
@property (readonly, nonatomic) long long baldCategory;
@property (readonly, nonatomic) long long glassesCategory;

+ (id)unitTestingFaceAttributes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)_AXMAgeCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMGenderCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMEyesCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMSmilingCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMFaceHairCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMHairColorCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMBaldCategoryForVisionCategoryIdentifier:(id)a0;
- (long long)_AXMGlassesCategoryForVisionCategoryIdentifier:(id)a0;
- (id)_accessibilityLabelForAgeCategory;
- (id)_accessibilityLabelForSmilingCategory;
- (id)_accessibilityLabelForFaceHairCategory;
- (id)_accessibilityLabelForHairColorCategory;
- (id)_accessibilityLabelForBaldCategory;
- (id)_accessibilityLabelForGlassesCategory;
- (id)initWithVisionFaceAttributes:(id)a0;
- (id)initWithAVMetadataFaceObject:(id)a0;
- (id)_accessibilityLabelForEyesCategory;
- (id)accessibilityLabelForAttributes;
- (void)encodeWithCoder:(id)a0;

@end
