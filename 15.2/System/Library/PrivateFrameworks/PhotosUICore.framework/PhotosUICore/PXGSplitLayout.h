@class PXGLayout;

@interface PXGSplitLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _additionalUpdateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
    BOOL _isPerformingAdditionalUpdate;
}

@property (readonly, nonatomic) long long firstSublayoutIndex;
@property (readonly, nonatomic) long long secondSublayoutIndex;
@property (readonly, nonatomic) BOOL allowsRepeatedSublayoutsUpdates;
@property (retain, nonatomic) PXGLayout *firstSublayout;
@property (retain, nonatomic) PXGLayout *secondSublayout;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL floatingModesRespectSafeArea;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } presentedPadding;

- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)didChangeSublayoutOrigins;
- (void)referenceDepthDidChange;
- (void)safeAreaInsetsDidChange;
- (void)willUpdate;
- (void)screenScaleDidChange;
- (void)_performUpdateSublayoutGeometries;
- (void)visibleRectDidChange;
- (void)_updateSublayoutGeometries;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)didUpdate;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)scrollableAxis;
- (void)scrollSpeedRegimeDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)update;
- (void)_replaceSublayout:(id)a0 withSublayout:(id)a1 atIndex:(long long)a2;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)referenceSizeDidChange;

@end
