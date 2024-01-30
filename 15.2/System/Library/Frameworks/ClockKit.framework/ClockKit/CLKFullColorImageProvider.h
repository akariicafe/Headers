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
+ (id)fullColorImageProviderWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
+ (id)providerWithFullColorImage:(id)a0;
+ (id)providerWithFullColorImage:(id)a0 tintedImageProvider:(id)a1;
+ (id)providerWithFullColorImage:(id)a0 applyScalingAndCircularMasking:(BOOL)a1;

- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)finalizeWithMaxSDKSize:(struct CGSize { double x0; double x1; })a0 maxDeviceSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)initWithFullColorImage:(id)a0 monochromeFilterType:(long long)a1 applyScalingAndCircularMasking:(BOOL)a2;
- (id)initWithFullColorImage:(id)a0 tintedImageProvider:(id)a1 applyScalingAndCircularMasking:(BOOL)a2;
- (void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize { double x0; double x1; })a0 maxDeviceSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;
- (id)initWithFullColorImage:(id)a0;
- (id)initWithFullColorImage:(id)a0 monochromeFilterType:(long long)a1;
- (id)initWithFullColorImage:(id)a0 tintedImageProvider:(id)a1;
- (id)initWithFullColorImage:(id)a0 applyScalingAndCircularMasking:(BOOL)a1;

@end
