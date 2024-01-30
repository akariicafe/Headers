@class VUILabel, UIVisualEffectView, NSString;

@interface VUIVisualEffectLabel : UIView <VUILabelBaselineProtocol>

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) VUILabel *label;
@property (nonatomic) unsigned long long visualEffectLabelType;
@property (nonatomic) long long blurEffectStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_backdropStyleForVisualEffectType:(unsigned long long)a0 traitCollection:(id)a1;
+ (id)labelWithType:(unsigned long long)a0 label:(id)a1 traitCollection:(id)a2 existingVisualEffectLabel:(id)a3;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateContentWithNewLabel:(id)a0 oldLabel:(id)a1;
- (void)_configureVisualEffectForTraitCollection;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)vui_baselineOffsetFromBottom;

@end
