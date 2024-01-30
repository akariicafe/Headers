@class UIFont, NSString, UIActivityIndicatorView, AVLayoutItemAttributes, UILabel, NSLayoutConstraint, NSAttributedString;

@interface AVLabel : UIView <AVPlaybackControlsViewItem>

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UILabel *labelIfLoaded;
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic) long long numberOfLines;
@property (retain, nonatomic) NSLayoutConstraint *loadingIndicatorLeftAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *loadingIndicatorRightAlignmentConstraint;
@property (nonatomic) BOOL showsLoadingIndicator;
@property (nonatomic) long long loadingIndicatorAlignment;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct CGSize { double width; double height; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForFirstBaselineLayout;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)viewForLastBaselineLayout;
- (void)layoutAttributesDidChange;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutItem;

@end
