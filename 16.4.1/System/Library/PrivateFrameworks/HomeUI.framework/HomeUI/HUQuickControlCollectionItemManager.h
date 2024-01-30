@class HFItem, NSString, HFItemProvider;
@protocol NSCopying;

@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging>

@property (readonly, copy, nonatomic) id /* block */ gridItemProviderCreator;
@property (readonly, copy, nonatomic) id /* block */ supplementaryItemProviderCreator;
@property (retain, nonatomic) HFItemProvider *gridItemProvider;
@property (retain, nonatomic) HFItemProvider *supplementaryItemProvider;
@property (readonly, copy, nonatomic) HFItem<NSCopying> *supplementaryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_shouldDisableOptionalDataDuringFastInitialUpdate;
- (id)initWithDelegate:(id)a0 gridItemProviderCreator:(id /* block */)a1 supplementaryItemProviderCreator:(id /* block */)a2;
- (BOOL)isGridItem:(id)a0;

@end
