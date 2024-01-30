@class HFServiceActionItem, HFControlPanelItemProvider;

@interface HUServiceActionControlsItemManager : HFItemManager

@property (retain, nonatomic) HFServiceActionItem *serviceActionItem;
@property (retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider;
@property (readonly, nonatomic) unsigned long long mode;

- (id)_sectionIdentifiers;
- (void).cxx_destruct;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)currentSectionIdentifiersSnapshot;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_actionControlsDelegate;
- (id)_sectionIdentifierForControlPanelItem:(id)a0;
- (id)initWithServiceActionItem:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;

@end
