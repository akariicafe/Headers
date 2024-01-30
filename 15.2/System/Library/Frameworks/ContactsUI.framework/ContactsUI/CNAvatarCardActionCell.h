@class UIView, CNAvatarCardHighlightView, UIImageView, UIButton, CNQuickAction, NSLayoutConstraint, UIPageControl, UILabel;

@interface CNAvatarCardActionCell : UITableViewCell {
    struct CGPoint { double x; double y; } _initialLocation;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIImageView *actionImageView;
@property (retain, nonatomic) CNAvatarCardHighlightView *defaultHighlightView;
@property (retain, nonatomic) CNAvatarCardHighlightView *moreHighlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIView *translatingView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) NSLayoutConstraint *punchOutLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *translatingViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pageControlLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *expandButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *moreHighlightViewHiddingConstraint;
@property (nonatomic) double initialTranslatingViewLeadingConstraintConstant;
@property (nonatomic) unsigned long long lastScrollDirection;
@property (nonatomic) double lastScrollDirectionTimestamp;
@property (nonatomic) BOOL gestureActivated;
@property (nonatomic) BOOL transitioning;
@property (nonatomic) BOOL swipped;
@property (nonatomic) BOOL moreHighlighted;
@property (retain, nonatomic) CNQuickAction *action;
@property (nonatomic) long long context;

+ (id)cellNibForActions;
+ (id)cellNibForContacts;

- (void)reloadData;
- (void)setHighlighted:(BOOL)a0;
- (void)awakeFromNib;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)trackHighlight:(id)a0;
- (void)_updateHighlightAnimated:(BOOL)a0;
- (void)startTrackingWithGestureRecognizer:(id)a0;
- (void)stopTrackingWithGestureRecognizer:(id)a0;
- (void)_updateFonts;

@end
