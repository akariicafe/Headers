@class PXGSublayoutComposition, NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    BOOL _isUpdatingSublayouts;
    long long *_currentSingleLayouts;
    long long *_pendingSingleLayouts;
    BOOL *_pendingAnimations;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (retain, nonatomic) PXGSublayoutComposition *composition;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)_updateSublayouts;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (id)init;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)screenScaleDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (id)initWithComposition:(id)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)didApplySublayoutChangeDetails:(id)a0 axAdjustedSubgroupChangeDetails:(id)a1 countAfterChanges:(long long)a2;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_invalidateStylableType:(long long)a0;
- (void)_invalidateSublayouts;
- (void)setSublayoutIndex:(long long)a0 forUniquelyStylableType:(long long)a1 animated:(BOOL)a2;
- (void)_updateSublayoutOfStylableType:(long long)a0;

@end
