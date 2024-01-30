@class NSDictionary, NSSet;

@interface PXPhotosDetailsBarSpec : PXBarSpec {
    NSDictionary *_sortPriorityByBarItemIdentifierByPlacement;
    NSSet *_includedBarItemIdentifiers;
    BOOL _shouldPlaceEditActionsInToolbar;
}

@property (nonatomic) unsigned long long detailsOptions;

- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)_sortPriorityForBarItem:(id)a0 placement:(id)a1;
- (id)_placementForBarItem:(id)a0;
- (BOOL)_shouldIncludeItem:(id)a0;
- (id)sortedBarItemsByPlacement:(id)a0;

@end
