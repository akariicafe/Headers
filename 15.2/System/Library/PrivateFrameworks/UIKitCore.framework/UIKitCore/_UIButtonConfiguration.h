@class UIBackgroundConfiguration, NSString, UIColor, UIImage, UITraitCollection, UIImageSymbolConfiguration, NSAttributedString;

@interface _UIButtonConfiguration : NSObject <_UIButtonConfigurationShim, NSCopying, NSSecureCoding> {
    id /* block */ _baseAttributesTransformer;
    UITraitCollection *_traitCollection;
    long long _role;
    BOOL _hasCustomizedImageTintColorTransformer;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIBackgroundConfiguration *background;
@property (readonly, nonatomic) long long cornerStyle;
@property (readonly, nonatomic) long long buttonSize;
@property (readonly, nonatomic) long long macIdiomStyle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage;
@property (readonly, nonatomic) BOOL showsActivityIndicator;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) unsigned long long imagePlacement;
@property (readonly, nonatomic) double imagePadding;
@property (readonly, nonatomic) double titlePadding;
@property (readonly, nonatomic) long long titleAlignment;
@property (readonly, nonatomic) long long titleLineBreakMode;
@property (readonly, nonatomic) long long subtitleLineBreakMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=_setImageTintColorTransformerIdentifier:) long long imageTintColorTransformerIdentifier;
@property (readonly, nonatomic) long long style;
@property (nonatomic) long long macIdiomStyle;
@property (readonly, nonatomic) UIBackgroundConfiguration *background;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) id /* block */ imageTintColorTransformer;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage;
@property (nonatomic) unsigned long long imageEdge;
@property (nonatomic) long long buttonSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) id /* block */ titleTextAttributesTransformer;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) id /* block */ subtitleTextAttributesTransformer;
@property (nonatomic) BOOL showsBusyIndicator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } backgroundToContentInsets;
@property (nonatomic) double imageToTitlePadding;

+ (id)tintedButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)filledButtonConfiguration;
+ (id)plainButtonConfiguration;
+ (id)configurationWithStyle:(long long)a0;

- (id)_resolvedActivityIndicatorColor;
- (BOOL)_hasOversizedSubtitle;
- (id)_resolvedImage;
- (BOOL)_hasOversizedTitle;
- (id)_traitCollection;
- (BOOL)_hasSymbolImage;
- (void)encodeWithCoder:(id)a0;
- (id)_apiValue;
- (long long)_resolvedTitleAlignment;
- (BOOL)_hasMultilineSubtitle;
- (id)_resolvedSymbolConfiguration;
- (id)_resolvedSubtitle;
- (id)_spiValue;
- (id)_resolvedTitle;
- (id)updatedConfigurationForState:(id)a0;
- (BOOL)_hasMultilineTitle;
- (BOOL)_isRoundButton;
- (id)_resolvedImageColor;
- (double)_resolvedActivityIndicatorSize;
- (double)_resolvedImageReservation;
- (BOOL)_hasObscuringBackground;
- (long long)_resolvedMacIdiomStyle;
- (id)_updateFromButton:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateMetadataFromButton:(id)a0;

@end
