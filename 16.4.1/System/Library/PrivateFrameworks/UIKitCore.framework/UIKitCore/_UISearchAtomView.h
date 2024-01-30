@class UIFont, NSString, NSArray, UIImageView, _UISearchAtomBackgroundView, _UISearchAtomViewVisualStyle, NSLayoutConstraint, UILabel, UIColor;
@protocol NSCopying;

@interface _UISearchAtomView : UIView <_UIVisualStyleStylable, _UIAtomTextViewAtomLayout> {
    struct { unsigned char enabled : 1; } _flags;
}

@property (class, readonly, nonatomic) id<NSCopying> visualStyleRegistryIdentity;

@property (retain, nonatomic) _UISearchAtomBackgroundView *backgroundView;
@property (readonly, nonatomic) _UISearchAtomViewVisualStyle *visualStyle;
@property (copy, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSLayoutConstraint *maximumAtomWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint;
@property (copy, nonatomic) NSArray *withImageConstraints;
@property (copy, nonatomic) NSArray *withoutImageConstraints;
@property (retain) UILabel *textLabel;
@property (retain) UIImageView *leadingImage;
@property (retain, nonatomic) UIColor *atomBackgroundColor;
@property (retain, nonatomic) UIFont *atomFont;
@property (nonatomic) double viewportWidth;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long selectionStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)defaultAtomBackgroundColorForTraitCollection:(id)a0;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateColors;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForLastBaselineLayout;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setSelectionStyle:(long long)a0 animated:(BOOL)a1;

@end
