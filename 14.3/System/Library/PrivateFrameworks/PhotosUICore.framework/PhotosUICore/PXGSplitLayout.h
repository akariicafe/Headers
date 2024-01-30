@class PXGLayout;

@interface PXGSplitLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _additionalUpdateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
    BOOL _isPerformingAdditionalUpdate;
}

@property (readonly, nonatomic) long long firstSublayoutIndex;
@property (readonly, nonatomic) long long secondSublayoutIndex;
@property (retain, nonatomic) PXGLayout *firstSublayout;
@property (retain, nonatomic) PXGLayout *secondSublayout;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL floatingModesRespectSafeArea;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } presentedPadding;

- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void).cxx_destruct;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_replaceSublayout:(id)a0 withSublayout:(id)a1 atIndex:(long long)a2;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)screenScaleDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)didChangeSublayoutOrigins;
- (void)_updateSublayoutGeometries;

@end
