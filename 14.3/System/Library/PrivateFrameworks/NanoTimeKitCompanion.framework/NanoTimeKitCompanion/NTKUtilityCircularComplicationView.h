@class NSString, NTKContainerView;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate>

@property (readonly, nonatomic) NTKContainerView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)layoutOverride;

- (void)setEditing:(BOOL)a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutContainerView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setEditingRotationAngle:(double)a0;
- (void)_updateEditingRotationAngle;

@end
