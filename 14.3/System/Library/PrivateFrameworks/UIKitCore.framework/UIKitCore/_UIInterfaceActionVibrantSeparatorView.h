@class NSString, _UIInterfaceActionSeparatorConstraintController;

@interface _UIInterfaceActionVibrantSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>

@property (readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (nonatomic) double constantAxisDimension;
@property (nonatomic) double horizontalLineLeadingInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupEffectView;
- (id)init;
- (void).cxx_destruct;
- (void)_updateContentDirectionalInsets;
- (void)updateConstraints;
- (long long)constantSizedAxis;
- (void)setConstantSizedAxis:(long long)a0;

@end
