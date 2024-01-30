@class NSDate, NSString, NSArray, UIImage, BSUIFontProvider, UIView, NCNotificationContentView, UIButton, NCNotificationGrabberView, NSTimeZone, NCAuxiliaryOptionsView;

@interface NCNotificationShortLookView : PLTitledPlatterView <NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting> {
    BSUIFontProvider *_fontProvider;
    NCNotificationContentView *_notificationContentView;
    NCNotificationGrabberView *_grabberView;
    NCAuxiliaryOptionsView *_auxiliaryOptionsView;
}

@property (nonatomic, getter=_isGrabberVisible, setter=_setGrabberVisible:) BOOL grabberVisible;
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (readonly, nonatomic, getter=_notificationContentView) NCNotificationContentView *notificationContentView;
@property (nonatomic, getter=_isBanner, setter=_setBanner:) BOOL banner;
@property (nonatomic, getter=_isGrabberVisible, setter=_setGrabberVisible:) BOOL grabberVisible;
@property (nonatomic, getter=isNotificationContentViewHidden) BOOL notificationContentViewHidden;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (copy, nonatomic) NSString *summaryText;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, nonatomic) NSArray *iconButtons;
@property (readonly, nonatomic) UIButton *utilityButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, nonatomic) NSArray *optionButtons;
@property (nonatomic) BOOL auxiliaryOptionsVisible;

- (BOOL)adjustForContentSizeCategoryChange;
- (void)setBackgroundView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureCustomContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutAuxiliaryOptionsView;
- (void)_layoutGrabber;
- (struct CGSize { double x0; double x1; })_sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0 withAuxiliaryOptionsViewVisible:(BOOL)a1;
- (void)_configureAuxiliaryOptionsViewIfNecessary;
- (void)_configureHeaderContentView;
- (id)_newNotificationContentView;

@end
