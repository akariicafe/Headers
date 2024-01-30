@class NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAppLayout:(id)a0;
- (void)_updateSnapshotViewWithAppLayout:(id)a0;
- (void)prepareForReuse;
- (id)_snapshotView;
- (void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appLayout:(id)a1 delegate:(id)a2 active:(BOOL)a3 windowScene:(id)a4;
- (void)setContentView:(id)a0;

@end
