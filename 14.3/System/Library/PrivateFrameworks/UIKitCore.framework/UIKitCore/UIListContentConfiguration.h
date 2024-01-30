@class UIListContentTextProperties, NSString, UIImage, NSAttributedString, UIListContentImageProperties;

@interface UIListContentConfiguration : NSObject <UIContentConfiguration, NSSecureCoding> {
    struct { unsigned char hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; unsigned char hasCustomizedDirectionalLayoutMargins : 1; unsigned char hasCustomizedPrefersSideBySideTextAndSecondaryText : 1; unsigned char hasCustomizedImageToTextPadding : 1; unsigned char hasCustomizedTextToSecondaryTextHorizontalPadding : 1; unsigned char hasCustomizedTextToSecondaryTextVerticalPadding : 1; } _configurationFlags;
    BOOL _prefersSideBySideTextAndSecondaryText;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    double _imageToTextPadding;
    double _textToSecondaryTextHorizontalPadding;
    double _textToSecondaryTextVerticalPadding;
    long long _defaultStyle;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _directionalLayoutMargins;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIListContentImageProperties *imageProperties;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIListContentTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) BOOL prefersSideBySideTextAndSecondaryText;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic) double textToSecondaryTextHorizontalPadding;
@property (nonatomic) double textToSecondaryTextVerticalPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plainHeaderConfiguration;
+ (id)groupedHeaderConfiguration;
+ (id)sidebarHeaderConfiguration;
+ (id)accompaniedSidebarCellConfiguration;
+ (id)sidebarCellConfiguration;
+ (id)cellConfiguration;
+ (id)subtitleCellConfiguration;
+ (id)valueCellConfiguration;
+ (id)plainFooterConfiguration;
+ (id)groupedFooterConfiguration;
+ (id)sidebarSubtitleCellConfiguration;
+ (id)accompaniedSidebarSubtitleCellConfiguration;

- (id)updatedConfigurationForState:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)makeContentView;
- (BOOL)isEqual:(id)a0;
- (void)_setSwiftBridgingImageProperties:(id)a0;
- (void)_setSwiftBridgingTextProperties:(id)a0;
- (void)_setSwiftBridgingSecondaryTextProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
