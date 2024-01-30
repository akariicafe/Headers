@class SBAppLayout;

@interface SBCoplanarSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_activeAppLayout;
}

@property (nonatomic) double scale;
@property (nonatomic) long long spacingType;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)_offscreenSpacing;
- (long long)_indexOfActiveAppLayout;
- (id)initWithActiveAppLayout:(id)a0;

@end
