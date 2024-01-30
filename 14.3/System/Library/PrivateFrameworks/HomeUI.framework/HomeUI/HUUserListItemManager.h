@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager

@property (readonly, nonatomic) HFHomeBuilder *homeBuilder;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)_homeFuture;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)initWithHomeBuilder:(id)a0 delegate:(id)a1;

@end
