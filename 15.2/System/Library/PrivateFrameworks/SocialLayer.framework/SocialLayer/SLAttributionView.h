@class UIColor, UIButton, NSString, SLHighlight, NSLayoutConstraint, SLHighlightPillView;
@protocol SLAttributionViewDelegate;

@interface SLAttributionView : UIView <SLHighlightPillViewDelegate>

@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLHighlightPillView *pillView;
@property (nonatomic) long long preferredAlignment;
@property (nonatomic) long long preferredBackgroundStyle;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (nonatomic) BOOL usesBannerLayout;
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillHorizontalAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonXDimensionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonVerticalConstraint;
@property (nonatomic) double maxWidthForClippingMarquee;
@property (nonatomic) BOOL marqueeRequired;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<SLAttributionViewDelegate> delegate;
@property (nonatomic) BOOL enablesMarquee;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentTranscriptForAttributionIdenfitier:(id)a0 attachmentGUID:(id)a1 presentingViewController:(id)a2;
+ (void)useNewDefaultBackgroundStyle;
+ (void)presentTranscriptForAttributionIdenfitier:(id)a0 presentingViewController:(id)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)prepareLayout;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)variant;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithHighlight:(id)a0;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (void)dealloc;
- (void)prepareLayoutWithMaxWidth:(double)a0;
- (void)updateAlignment:(long long)a0;
- (id)contextMenuItems;
- (void)updateBackgroundStyle:(long long)a0;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (void)updateInterfaceStyle:(long long)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)useBannerLayout;
- (long long)_backgroundStyleEnforcingPolicies;
- (id)_backgroundColorEnforcingPolicies;
- (void)_updateMarqueeIfNecessary;
- (double)_minHeightForCurrentStyle;
- (void)feedbackForCloseButtonHit;
- (void)_crossPlatformNeedsUpdateConstraints;
- (void)_sanitizeFrameIfNecessaryForTAMIC;
- (void)_crossPlatformNeedsLayout;
- (BOOL)_hasiOSBannerVariant;
- (void)loadCloseButton;
- (long long)_alignmentEnforcingPolicies;
- (BOOL)_crossPlatformIsRTL;
- (void)highlightPillViewDidLoadNewRemoteContent:(id)a0;
- (id)additionalContextMenuItemsForHighlightPillView:(id)a0;
- (void)_crossPlatformCloseButtonTapped:(id)a0;

@end
