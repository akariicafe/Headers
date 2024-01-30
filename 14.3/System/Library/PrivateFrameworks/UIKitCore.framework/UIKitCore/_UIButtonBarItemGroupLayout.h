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

- (void)_configure;
- (void)_addLayoutViews:(id)a0;
- (BOOL)isGroupLayout;
- (BOOL)isSpaceLayout;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (void)_addLayoutGuides:(id)a0;
- (id)_newLayoutForBarButtonItem:(id)a0 useGroupSizing:(BOOL)a1;
- (id)_representativeLayout;
- (void).cxx_destruct;
- (id)_itemLayouts;
- (id)subLayouts;
- (id)description;
- (id)initWithLayoutMetrics:(id)a0 barButtonItemGroup:(id)a1;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (id)initWithLayoutMetrics:(id)a0;
- (BOOL)shouldHoriziontallyCenterView:(id)a0;
- (id)layoutsForSpacerItem:(id)a0;
- (void)_iterateConfiguredLayouts:(id /* block */)a0;
- (id)layoutForBarButtonItem:(id)a0;

@end
