@class UIView, NSString, NSArray, UIImage, NSDate, UITapGestureRecognizer, UIButton, UIControl, NCNotificationContentView, NSTimeZone, UIScrollView;
@protocol NCNotificationLongLookViewDelegate;

@interface NCNotificationLongLookView : PLExpandedPlatterView <UIGestureRecognizerDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView> {
    NCNotificationContentView *_notificationContentView;
    UITapGestureRecognizer *_lookViewTapGestureRecognizer;
}

@property (weak, nonatomic) id<NCNotificationLongLookViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) BOOL hidesNotificationContent;
@property (readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (readonly, nonatomic) UIView *customContentView;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double x0; double x1; } customContentSize;
@property (nonatomic, getter=isActionsHidden) BOOL actionsHidden;
@property (readonly, nonatomic) UIControl *dismissControl;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } dismissControlInsets;
@property (nonatomic) long long dismissControlPosition;
@property (nonatomic) BOOL clipsVisibleContentToBounds;
@property (nonatomic) double contentBottomInset;

- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_contentViewSize;
- (void)traitCollectionDidChange:(id)a0;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_updateTopMargin;
- (void)_configureNotificationContentViewIfNecessary;
- (struct CGSize { double x0; double x1; })_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize { double x0; double x1; })a0;
- (void)_configureCustomContentView;
- (long long)lookStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_actionsViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentViewFrame;
- (void)_layoutCustomContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (BOOL)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)a0;
- (void)notificationContentView:(id)a0 willInteractWithURL:(id)a1;

@end
