@class NSArray, UILabel, NSLayoutConstraint, UIView;

@interface TabExplanationView : UIView {
    UIView *_labelsContainer;
    UILabel *_title;
    UILabel *_message;
    NSLayoutConstraint *_spaceBetweenTitleAndMessageConstraint;
    NSArray *_defaultHorizontalPaddingConstraints;
    NSArray *_accessibilityHorizontalPaddingConstraints;
}

@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } labelsContainerFrame;

- (void)setQuery:(id)a0;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_basicLabel;
- (void)_updateLabelBlendMode;
- (id)initWithVariant:(unsigned long long)a0 query:(id)a1;
- (void)setVariant:(unsigned long long)a0 query:(id)a1;

@end
