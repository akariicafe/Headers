@class UIFont, NSString, NSArray, UIImageView, _UISearchAtomBackgroundView, NSLayoutConstraint, UILabel, UIColor;

@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout> {
    struct { unsigned char enabled : 1; } _flags;
}

@property (retain, nonatomic) _UISearchAtomBackgroundView *backgroundView;
@property (copy, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint;
@property (copy, nonatomic) NSArray *withImageConstraints;
@property (copy, nonatomic) NSArray *withoutImageConstraints;
@property (retain) UILabel *textLabel;
@property (retain) UIImageView *leadingImage;
@property (retain, nonatomic) UIColor *atomBackgroundColor;
@property (retain, nonatomic) UIFont *atomFont;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long selectionStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionBounds;
@property (readonly, nonatomic) long long baseWritingDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAtomBackgroundColorForTraitCollection:(id)a0;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)_defaultFont;

- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (id)viewForLastBaselineLayout;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateColors;
- (void)setSelectionStyle:(long long)a0 animated:(BOOL)a1;

@end
