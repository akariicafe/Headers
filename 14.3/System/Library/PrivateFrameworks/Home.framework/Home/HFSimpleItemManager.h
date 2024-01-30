@interface HFSimpleItemManager : HFItemManager

@property (copy, nonatomic) id /* block */ homeCreator;
@property (copy, nonatomic) id /* block */ itemModuleCreator;
@property (copy, nonatomic) id /* block */ itemProviderCreator;
@property (copy, nonatomic) id /* block */ itemComparator;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 itemProvidersCreator:(id /* block */)a2;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 itemProvidersCreator:(id /* block */)a1;
- (id)_buildItemModulesForHome:(id)a0;

@end
