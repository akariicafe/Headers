@class NSDate, PLPlatterView, NSTimeZone, UIView, NSString, UIImageConfiguration, NSAttributedString, BSUIFontProvider, MTMaterialView, NSArray, MTVisualStylingProvider, NCAuxiliaryOptionsView, UIImage;
@protocol NCNotificationContentDisplaying;

@interface NCNotificationShortLookView : UIView <PLPlatter, NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting, MTMaterialGrouping> {
    PLPlatterView *_platterView;
    BSUIFontProvider *_fontProvider;
    UIView<NCNotificationContentDisplaying> *_notificationContentView;
    NCAuxiliaryOptionsView *_auxiliaryOptionsView;
}

@property (nonatomic, getter=_isBanner, setter=_setBanner:) BOOL banner;
@property (nonatomic, getter=isNotificationContentViewHidden) BOOL notificationContentViewHidden;
@property (readonly, nonatomic) MTMaterialView *backgroundMaterialView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isTruncatingSecondaryText) BOOL truncatingSecondaryText;
@property (readonly, nonatomic) UIView *customContentView;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (copy, nonatomic) UIView *prominentIconView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *summaryText;
@property (copy, nonatomic) NSString *importantText;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (retain, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (copy, nonatomic) NSArray *menuActions;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, nonatomic) NSArray *optionButtons;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)_setFontProvider:(id)a0;
- (void)_layoutNotificationContentView;
- (void)layoutSubviews;
- (id)_fontProvider;
- (double)_cornerRadius;
- (struct CGSize { double x0; double x1; })_sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0 withAuxiliaryOptionsViewVisible:(BOOL)a1;
- (void)_configureAuxiliaryOptionsViewIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutAuxiliaryOptionsView;
- (void)_setCornerRadius:(double)a0;
- (id)_newNotificationContentView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)notificationContentView;
- (double)_continuousCornerRadius;
- (void)_configurePlatterViewIfNeccesary;
- (id)_notificationContentView;
- (void)_setContinuousCornerRadius:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;

@end
