@class UIImageView, UILabel, NSDate, NSStringDrawingContext, NSTimeZone, UIView, NSString, UIImageConfiguration, NSAttributedString, BSUIFontProvider, NSArray, MTVisualStylingProvider, UIImage;

@interface NCDigestFeaturedNotificationContentView : UIView <NCNotificationContentDisplaying> {
    UIView *_crossfadingContentView;
    UILabel *_primaryTextLabel;
    UILabel *_primarySubtitleTextLabel;
    UILabel *_secondaryTextLabel;
    UILabel *_footerTextLabel;
    UIView *_imageBoundingView;
    UIImageView *_thumbnailImageView;
    UIImageView *_iconImageView;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
    BOOL _hasUpdatedContent;
}

@property (readonly, nonatomic, getter=isLayoutHorizontal) BOOL layoutHorizontal;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIImage *thumbnail;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *importantText;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSString *summaryText;
@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)layoutSubviews;
- (void)_layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (void)didMoveToWindow;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_configureCrossfadingContentViewIfNecessary;
- (void)_updateTextAttributesForPrimaryTextLabel;
- (void)_updateTextAttributesForPrimarySubtitleTextLabel;
- (void)_updateTextAttributesForFooterTextLabel;
- (void)_updateVisualStylingOfImageView:(id)a0 ifSymbolImageWithStyle:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (unsigned long long)_numberOfLinesForPrimaryTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForPrimarySubtitleTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForSecondaryTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_maximumNumberOfLinesForPrimaryText;
- (unsigned long long)_maximumNumberOfLinesForPrimarySubtitleText;
- (unsigned long long)_maximumNumberOfLinesForSecondaryText;
- (unsigned long long)_maximumNumberOfLinesForFooterText;
- (void)_updateTextAttributesForSecondaryTextElement;
- (void)_updateTextAttributes;
- (void)_layoutIconImageView;
- (BOOL)_isAXSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelSizingRectForHorizontalLayoutForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForFooterTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageSizingRectForHorizontalLayoutForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_imageHeightForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureImageBoundingViewIfNecessary;
- (void)_layoutImageBoundingView;
- (void)_layoutThumbnailImageView;
- (void)_layoutPrimaryTextLabel;
- (void)_layoutPrimarySubtitleTextLabel;
- (void)_layoutSecondaryTextLabel;
- (void)_layoutFooterTextLabel;

@end
