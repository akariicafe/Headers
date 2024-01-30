@class NSArray, UIBarButtonItem;
@protocol _UIButtonBarLayoutMetricsData;

@interface _UIButtonBarLayout : NSObject {
    id<_UIButtonBarLayoutMetricsData> _layoutMetrics;
}

@property (nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) BOOL isSpaceLayout;
@property (readonly, nonatomic) BOOL isGroupLayout;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) NSArray *subLayouts;

- (void)configure;
- (BOOL)compact;
- (BOOL)suppressSpacing;
- (void)_addLayoutViews:(id)a0;
- (void)addLayoutViews:(id)a0 layoutGuides:(id)a1 constraintsToActivate:(id)a2 constraintsToDeactivate:(id)a3;
- (void)_configure;
- (BOOL)shouldHorizontallyCenterView:(id)a0;
- (void)_addLayoutGuides:(id)a0;
- (void)addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (void)setSuppressSpacing:(BOOL)a0;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (id)initWithLayoutMetrics:(id)a0;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (id)_metricsData;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (void)addLayoutGuides:(id)a0;
- (BOOL)useGroupSizing;
- (void)addLayoutViews:(id)a0;
- (void)setUseGroupSizing:(BOOL)a0;
- (BOOL)_shouldBeDirty;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
