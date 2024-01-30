@class NSString, NSURL, NSArray;

@interface SKUISwooshPageComponent : SKUIPageComponent {
    long long _fcKind;
    long long _missingDataCount;
    BOOL _showsItemTitles;
}

@property (readonly, nonatomic) long long seeAllStyle;
@property (readonly, nonatomic) NSString *seeAllTitle;
@property (readonly, nonatomic) NSURL *seeAllURL;
@property (readonly, nonatomic) long long swooshType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *lockups;
@property (readonly, nonatomic) struct SKUILockupStyle { long long artworkSize; long long layoutStyle; unsigned long long visibleFields; } lockupStyle;
@property (readonly, nonatomic) NSString *platformKeyProfile;
@property (readonly, nonatomic) BOOL showsIndexNumbers;
@property (readonly, nonatomic) NSArray *bricks;
@property (readonly, nonatomic) BOOL showsBrickTitles;
@property (readonly, nonatomic) NSArray *mediaComponents;
@property (readonly, nonatomic) BOOL showsMediaTitles;

- (long long)componentType;
- (void).cxx_destruct;
- (id)initWithItemList:(id)a0;
- (id)valueForMetricsField:(id)a0;
- (id)_brickItemsWithChildren:(id)a0 customPageContext:(id)a1;
- (id)_brickItemsWithChildren:(id)a0 featuredPageContext:(id)a1;
- (unsigned long long)_defaultVisibleFieldsForItemKind:(long long)a0;
- (BOOL)_isBrickAvailable:(id)a0 withPageContext:(id)a1;
- (struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })_lockupStyleWithLockups:(id)a0;
- (id)_lockupWithItemIdentifier:(id)a0 context:(id)a1;
- (id)_lockupsWithChildren:(id)a0 context:(id)a1;
- (id)_lockupsWithChildren:(id)a0 featuredPageContext:(id)a1;
- (id)_mediaComponentsWithChildren:(id)a0 context:(id)a1;
- (id)_newLockupComponentWithItem:(id)a0 defaultStyle:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (void)_reloadMissingDataCount;
- (void)_setSeeAllValuesWithLinkInfo:(id)a0;
- (void)_updateBricksWithItems:(id)a0;
- (void)_updateLockup:(id)a0 withItem:(id)a1;
- (id)_updateLockupItemsWithItems:(id)a0;
- (void)_updateLockupItemsWithLookupResponse:(id)a0;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)initWithLockups:(id)a0 swooshType:(long long)a1 title:(id)a2;
- (id)initWithRelatedContentContext:(id)a0;
- (id)initWithRoomContext:(id)a0;
- (BOOL)isMissingItemData;
- (id)metricsElementName;

@end
