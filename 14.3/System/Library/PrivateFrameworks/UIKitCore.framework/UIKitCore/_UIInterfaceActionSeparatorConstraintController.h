@class NSLayoutConstraint, UIView;
@protocol UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying;

@interface _UIInterfaceActionSeparatorConstraintController : NSObject

@property (readonly, weak, nonatomic) UIView<UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView;
@property (readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint;
@property (nonatomic) long long constantSizedAxis;
@property (nonatomic) double constantAxisDimension;

- (id)initWithSeparatorView:(id)a0;
- (BOOL)_isFixedWidth;
- (void).cxx_destruct;
- (void)_updateConstantSizedConstraints;
- (void)separatorViewDidUpdateConstraints;

@end
