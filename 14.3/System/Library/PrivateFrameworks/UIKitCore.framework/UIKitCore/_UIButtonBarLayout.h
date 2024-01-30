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

- (void)_configure;
- (void)_addLayoutViews:(id)a0;
- (void)configure;
- (id)_metricsData;
- (void)setSuppressSpacing:(BOOL)a0;
- (BOOL)useGroupSizing;
- (BOOL)suppressSpacing;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (void)addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (void)_addLayoutGuides:(id)a0;
- (id)init;
- (BOOL)compact;
- (void).cxx_destruct;
- (void)addLayoutViews:(id)a0 layoutGuides:(id)a1 constraintsToActivate:(id)a2 constraintsToDeactivate:(id)a3;
- (id)description;
- (void)setUseGroupSizing:(BOOL)a0;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (BOOL)_shouldBeDirty;
- (void)addLayoutGuides:(id)a0;
- (id)initWithLayoutMetrics:(id)a0;
- (BOOL)shouldHoriziontallyCenterView:(id)a0;
- (void)addLayoutViews:(id)a0;

@end
