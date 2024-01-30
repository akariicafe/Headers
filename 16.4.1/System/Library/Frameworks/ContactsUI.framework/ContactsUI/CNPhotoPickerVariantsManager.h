@class NSArray;

@interface CNPhotoPickerVariantsManager : NSObject

@property (retain, nonatomic) NSArray *avatarBackgrounds;
@property (retain, nonatomic) NSArray *defaultEmojis;

+ (id)gradientStartColor:(id)a0;
+ (id)avatarBackgroundsFromDictionary:(id)a0;
+ (id)avatarPoseConfigurationsForAvatarRecord:(id)a0;
+ (id)colorFromRGBArray:(id)a0;
+ (id)colorFromRGBString:(id)a0;
+ (id)colorGradientBackground:(id)a0;
+ (id)colorVariantWithColorNamed:(id)a0;
+ (id)compositeColorForTopColor:(id)a0 bottomColor:(id)a1;
+ (id)defaultEmojisFromDictionary:(id)a0;
+ (id)generateGradientColorsByColor;
+ (id)generateMonogramGradientColorsByColor;
+ (id)gradientBackgroundImageForColor:(id)a0;
+ (id)monogramColorGradientBackground:(id)a0;
+ (id)nonAlphaColorForBackgroundColor:(id)a0;
+ (id)sharingProfileAvatarPoseConfigurationForAvatarRecord:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)randomColorVariant;

@end
