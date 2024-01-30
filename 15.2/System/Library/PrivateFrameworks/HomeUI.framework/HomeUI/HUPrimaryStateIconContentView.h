@class HFPrimaryStateIconDescriptor;

@interface HUPrimaryStateIconContentView : HUIconContentView

@property (readonly, nonatomic) HFPrimaryStateIconDescriptor *iconDescriptor;

- (void)tintColorDidChange;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (void)updateIconFromState:(long long)a0 toState:(long long)a1 animated:(BOOL)a2;
- (void)updateColorsForDisplayStyle:(unsigned long long)a0;

@end
