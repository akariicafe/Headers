@class NSLayoutConstraint, UIView;
@protocol UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying;

@interface _UIInterfaceActionSeparatorConstraintController : NSObject

@property (readonly, weak, nonatomic) UIView<UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView;
@property (readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint;
@property (nonatomic) long long constantSizedAxis;
@property (nonatomic) double constantAxisDimension;

- (void)separatorViewDidUpdateConstraints;
- (BOOL)_isFixedWidth;
- (id)initWithSeparatorView:(id)a0;
- (void)_updateConstantSizedConstraints;
- (void).cxx_destruct;

@end
