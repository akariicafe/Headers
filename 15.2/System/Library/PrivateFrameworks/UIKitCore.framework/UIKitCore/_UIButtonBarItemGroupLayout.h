@class UILayoutGuide, NSMapTable, UIBarButtonItemGroup, NSMutableArray, _UIButtonBarLayout;

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
}

@property (readonly, nonatomic) UIBarButtonItemGroup *group;
@property (readonly, nonatomic) UILayoutGuide *groupSizeGuide;
@property (nonatomic) BOOL compact;
@property (nonatomic) BOOL useGroupSizing;
@property (nonatomic) BOOL suppressSpacing;
@property (copy, nonatomic) id /* block */ itemViewGenerator;

- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (BOOL)isSpaceLayout;
- (void)_addLayoutViews:(id)a0;
- (BOOL)shouldHoriziontallyCenterView:(id)a0;
- (id)subLayouts;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (BOOL)isGroupLayout;
- (void)_configure;
- (void)_addLayoutGuides:(id)a0;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (id)_newLayoutForBarButtonItem:(id)a0 useGroupSizing:(BOOL)a1;
- (id)layoutsForSpacerItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLayoutMetrics:(id)a0 barButtonItemGroup:(id)a1;
- (void)_iterateConfiguredLayouts:(id /* block */)a0;
- (id)_itemLayouts;
- (id)layoutForBarButtonItem:(id)a0;
- (id)_representativeLayout;
- (id)initWithLayoutMetrics:(id)a0;

@end
