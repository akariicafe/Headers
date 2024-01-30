@class NSSet;

@interface HUHomeHubSharedHomeWarningItemManager : HFItemManager

@property (retain, nonatomic) NSSet *homes;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 homes:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)itemForHome:(id)a0;

@end
