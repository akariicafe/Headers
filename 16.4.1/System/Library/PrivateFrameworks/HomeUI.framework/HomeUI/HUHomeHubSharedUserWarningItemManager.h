@class NSArray, NSMapTable;

@interface HUHomeHubSharedUserWarningItemManager : HFItemManager

@property (retain, nonatomic) NSMapTable *homesToUsersMap;
@property (retain, nonatomic) NSArray *homes;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 homesToUsersMap:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
