@class UIContentUnavailableTextProperties, NSString, UIContentUnavailableImageProperties, UIImage, UIContentUnavailableButtonProperties, NSAttributedString;

@interface UIContentUnavailableConfiguration : NSObject <UIContentConfiguration, NSSecureCoding> {
    struct { unsigned char hasCustomizedImageToTextPadding : 1; unsigned char hasCustomizedTextToSecondaryTextPadding : 1; unsigned char hasCustomizedTextToButtonPadding : 1; unsigned char hasCustomizedButtonToSecondaryButtonPadding : 1; } _configurationFlags;
    double _imageToTextPadding;
    double _textToSecondaryTextPadding;
    double _textToButtonPadding;
    double _buttonToSecondaryButtonPadding;
    long long _defaultStyle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIContentUnavailableImageProperties *imageProperties;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIContentUnavailableTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (readonly, nonatomic) UIContentUnavailableTextProperties *secondaryTextProperties;
@property (readonly, nonatomic) UIContentUnavailableButtonProperties *buttonProperties;
@property (readonly, nonatomic) UIContentUnavailableButtonProperties *secondaryButtonProperties;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic) double textToSecondaryTextPadding;
@property (nonatomic) double textToButtonPadding;
@property (nonatomic) double buttonToSecondaryButtonPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchConfiguration;
+ (id)emptyConfiguration;
+ (id)emptyProminentConfiguration;
+ (id)emptyExtraProminentConfiguration;
+ (id)loadingConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)makeContentView;
- (void).cxx_destruct;

@end
