@class NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
- (void)_updateSnapshotViewWithAppLayout:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appLayout:(id)a1 delegate:(id)a2 active:(BOOL)a3;
- (id)_snapshotView;
- (void)prepareForReuse;
- (void)setContentView:(id)a0;
- (void)setAppLayout:(id)a0;

@end
