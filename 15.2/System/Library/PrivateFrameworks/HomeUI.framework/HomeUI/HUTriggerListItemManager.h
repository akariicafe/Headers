@class HFStaticItemProvider, HUTriggerListSubheadlineItem, HUAddTriggerItem, HUTriggerItemProvider;

@interface HUTriggerListItemManager : HFItemManager

@property (retain, nonatomic) HUTriggerListSubheadlineItem *subheadlineItem;
@property (retain, nonatomic) HUAddTriggerItem *addTriggerItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HUTriggerItemProvider *triggerItemProvider;

- (void).cxx_destruct;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)currentSectionIdentifiersSnapshot;
- (id)_currentSectionIdentifiers;

@end
