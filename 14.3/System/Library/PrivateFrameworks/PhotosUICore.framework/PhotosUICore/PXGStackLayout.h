@class NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    BOOL _isUpdatingSublayouts;
    struct CGPoint { double x0; double x1; } *_sublayoutOriginsBeforeUpdate;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _flexibleRegionInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)_updateSublayouts;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
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
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })flexibleRegionInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (void)invalidateAdditionalSafeAreaInsets;
- (void)_updateInterlayoutSpacing;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
