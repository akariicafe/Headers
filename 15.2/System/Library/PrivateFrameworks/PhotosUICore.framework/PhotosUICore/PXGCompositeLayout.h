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
@property (readonly, nonatomic) BOOL allowsRepeatedSublayoutsUpdates;
@property (retain, nonatomic) PXGSublayoutComposition *composition;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)referenceDepthDidChange;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)willUpdate;
- (void)screenScaleDidChange;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_updateSublayouts;
- (id)initWithComposition:(id)a0;
- (void)visibleRectDidChange;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)didUpdate;
- (void)scrollSpeedRegimeDidChange;
- (void)update;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)referenceSizeDidChange;
- (void)_invalidateSublayouts;
- (void)dealloc;
- (void)compositionDidChange;
- (void)didApplySublayoutChangeDetails:(id)a0 axAdjustedSubgroupChangeDetails:(id)a1 countAfterChanges:(long long)a2;
- (void)setSublayoutIndex:(long long)a0 forUniquelyStylableType:(long long)a1 animated:(BOOL)a2;
- (void)_invalidateStylableType:(long long)a0;
- (void)_updateSublayoutOfStylableType:(long long)a0;
- (void)didUpdateSublayouts;

@end
