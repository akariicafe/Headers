@class HKQuantity, NSString, NSDictionary, NSURL, ACHTemplate, NSArray;

@interface ACHAchievement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizationBundleURLString;
@property (retain, nonatomic) NSString *resourceBundleURLString;
@property (retain, nonatomic) NSString *propertyListBundleURLString;
@property (retain, nonatomic) NSString *stickerBundleURLString;
@property (retain) NSURL *localizationBundleURL;
@property (retain) NSURL *resourceBundleURL;
@property (retain) NSURL *propertyListBundleURL;
@property (retain) NSURL *stickerBundleURL;
@property (retain) NSString *textureFilename;
@property (retain) NSString *badgeShapeName;
@property BOOL badgeUsesFullColorEnamel;
@property BOOL unearnedUsesTwoToneEnamel;
@property BOOL faceHasMetalInlay;
@property struct { float red; float green; float blue; } badgeEnamelColor;
@property struct { float red; float green; float blue; } badgeMetalColor;
@property long long badgeModelVersion;
@property BOOL badgeUsesTriColorEnamel;
@property struct { float red; float green; float blue; } enamelTriColor1;
@property struct { float red; float green; float blue; } enamelTriColor2;
@property struct { float red; float green; float blue; } enamelTriColor3;
@property (copy) NSString *section;
@property (retain) HKQuantity *progress;
@property (retain) HKQuantity *goal;
@property (retain) NSDictionary *customPlaceholderValues;
@property (readonly) BOOL hasClientRequiredURLs;
@property (readonly) ACHTemplate *template;
@property (readonly) NSArray *earnedInstances;
@property (readonly) BOOL unearned;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCodable:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithTemplate:(id)a0 earnedInstances:(id)a1;
- (id)shallowCopyReplacingEarnedInstances:(id)a0;

@end
