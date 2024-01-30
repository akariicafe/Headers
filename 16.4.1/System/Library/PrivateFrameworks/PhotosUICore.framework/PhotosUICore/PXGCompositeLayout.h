@class PXGSublayoutComposition, NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingSublayouts;
    long long *_currentSingleLayouts;
    long long *_pendingSingleLayouts;
    BOOL *_pendingAnimations;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (readonly, nonatomic) BOOL wantsCustomAlphaForSublayouts;
@property (readonly, nonatomic) BOOL allowsRepeatedSublayoutsUpdates;
@property (retain, nonatomic) PXGSublayoutComposition *composition;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)didUpdate;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)scrollSpeedRegimeDidChange;
- (void)_invalidateSublayouts;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)update;
- (void)_updateSublayouts;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)dealloc;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (id)initWithComposition:(id)a0;
- (id)init;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (void)referenceSizeDidChange;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)definesContextForPointReferences;
- (void).cxx_destruct;
- (void)viewEnvironmentDidChange;
- (void)screenScaleDidChange;
- (void)_updateSublayoutOfStylableType:(long long)a0;
- (void)_invalidateStylableType:(long long)a0;
- (double)alphaForSublayout:(id)a0 atIndex:(long long)a1;
- (void)compositionDidChange;
- (void)didApplySublayoutChangeDetails:(id)a0 axAdjustedSubgroupChangeDetails:(id)a1 countAfterChanges:(long long)a2;
- (void)didUpdateSublayouts;
- (void)invalidateSublayouts;
- (void)setSublayoutIndex:(long long)a0 forUniquelyStylableType:(long long)a1 animated:(BOOL)a2;

@end
