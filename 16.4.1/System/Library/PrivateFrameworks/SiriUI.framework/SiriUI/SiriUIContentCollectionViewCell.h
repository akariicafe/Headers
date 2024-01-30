@class UIColor, NSMutableArray, UIImageView, SiriUIKeyline, UILabel, UIView, NSLayoutConstraint;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {
    UIImageView *_chevronView;
    BOOL _hasSetUpSubviewConstraints;
    BOOL _hasSetupStaticSubviewConstraints;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
    NSMutableArray *_subviewConstraints;
}

@property (nonatomic) long long verticalAlignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textAndAccessoryInsets;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customViewEdgeInsets;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } textOffset;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } accessoryOffset;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } chevronOffset;
@property (readonly, nonatomic) double chevronTrailingMargin;
@property (readonly, nonatomic) SiriUIKeyline *keyline;
@property (nonatomic) long long keylineType;
@property (retain, nonatomic) UIColor *keylineCustomBackgroundColor;
@property (nonatomic) BOOL hasChevron;

+ (id)reuseIdentifier;
+ (BOOL)chevronBlendEffectEnabled;
+ (double)chevronTrailingMargin;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultInsets;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateSubviewConstraints;
- (void)setNeedsUpdateSubviewConstraints;

@end
