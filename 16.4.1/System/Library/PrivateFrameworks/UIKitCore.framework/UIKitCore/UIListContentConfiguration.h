@class UIListContentTextProperties, NSString, UIImage, NSAttributedString, UIListContentImageProperties;

@interface UIListContentConfiguration : NSObject <UIContentConfiguration, NSSecureCoding> {
    struct { unsigned char hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; unsigned char hasCustomizedDirectionalLayoutMargins : 1; unsigned char hasCustomizedPrefersSideBySideTextAndSecondaryText : 1; unsigned char hasCustomizedImageToTextPadding : 1; unsigned char hasCustomizedTextToSecondaryTextHorizontalPadding : 1; unsigned char hasCustomizedTextToSecondaryTextVerticalPadding : 1; unsigned char hasCustomizedEnforcesMinimumHeight : 1; } _configurationFlags;
    BOOL _prefersSideBySideTextAndSecondaryText;
    BOOL _enforcesMinimumHeight;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    double _imageToTextPadding;
    double _textToSecondaryTextHorizontalPadding;
    double _textToSecondaryTextVerticalPadding;
    long long _defaultStyle;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _directionalLayoutMargins;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setEnforcesMinimumHeight:) BOOL _enforcesMinimumHeight;
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

+ (id)_prominentInsetGroupedHeaderConfiguration;
+ (id)groupedFooterConfiguration;
+ (id)valueCellConfiguration;
+ (id)accompaniedSidebarSubtitleCellConfiguration;
+ (id)sidebarCellConfiguration;
+ (id)sidebarSubtitleCellConfiguration;
+ (id)cellConfiguration;
+ (id)_interactiveInsetGroupedHeaderConfiguration;
+ (id)plainFooterConfiguration;
+ (id)accompaniedSidebarCellConfiguration;
+ (id)groupedHeaderConfiguration;
+ (id)sidebarHeaderConfiguration;
+ (id)plainHeaderConfiguration;
+ (id)prominentInsetGroupedHeaderConfiguration;
+ (id)subtitleCellConfiguration;
+ (id)extraProminentInsetGroupedHeaderConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setSwiftBridgingImageProperties:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setSwiftBridgingSecondaryTextProperties:(id)a0;
- (void)_setSwiftBridgingTextProperties:(id)a0;
- (double)_minimumHeightForTraitCollection:(id)a0;
- (id)makeContentView;
- (void).cxx_destruct;

@end
