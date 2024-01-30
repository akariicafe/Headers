@class UIColor, CLKImageProvider, NSDictionary, UIImage, NSString;

@interface CLKFullColorImageProvider : NSObject <NSSecureCoding, NSCopying> {
    BOOL _applyScalingAndCircularMasking;
    BOOL _finalized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL prefersFilterOverTransition;
@property (readonly, nonatomic) Class ImageViewClass;
@property (readonly, nonatomic, getter=tritium_isTritiumInactiveFullColorImageProvider) BOOL tritium_inactiveFullColorImageProvider;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long monochromeFilterType;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CLKImageProvider *tintedImageProvider;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (id)new;
+ (id)fullColorImageProviderWithImageViewClass:(Class)a0;
+ (id)providerWithFullColorImage:(id)a0 monochromeFilterType:(long long)a1 applyScalingAndCircularMasking:(BOOL)a2;
+ (id)providerWithFullColorImage:(id)a0 monochromeFilterType:(long long)a1;
+ (id)providerWithFullColorImage:(id)a0 tintedImageProvider:(id)a1 applyScalingAndCircularMasking:(BOOL)a2;
+ (id)providerWithFullColorImage:(id)a0;
+ (id)providerWithFullColorImage:(id)a0 tintedImageProvider:(id)a1;
+ (id)providerWithFullColorImage:(id)a0 applyScalingAndCircularMasking:(BOOL)a1;

- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)finalizeWithMaxSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)initWithFullColorImage:(id)a0 monochromeFilterType:(long long)a1 applyScalingAndCircularMasking:(BOOL)a2;
- (id)initWithFullColorImage:(id)a0 tintedImageProvider:(id)a1 applyScalingAndCircularMasking:(BOOL)a2;
- (void)_resizeImagesIfNecessaryWithMaxSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)initWithFullColorImage:(id)a0;
- (id)initWithFullColorImage:(id)a0 monochromeFilterType:(long long)a1;
- (id)initWithFullColorImage:(id)a0 tintedImageProvider:(id)a1;
- (id)initWithFullColorImage:(id)a0 applyScalingAndCircularMasking:(BOOL)a1;

@end
