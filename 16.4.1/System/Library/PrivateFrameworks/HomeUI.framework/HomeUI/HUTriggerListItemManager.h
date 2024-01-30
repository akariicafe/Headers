@class HFStaticItemProvider, HUTriggerListSubheadlineItem, HUAddTriggerItem, HUTriggerItemProvider;

@interface HUTriggerListItemManager : HFItemManager

@property (retain, nonatomic) HUTriggerListSubheadlineItem *subheadlineItem;
@property (retain, nonatomic) HUAddTriggerItem *addTriggerItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HUTriggerItemProvider *triggerItemProvider;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_currentSectionIdentifiers;
- (id)currentSectionIdentifiersSnapshot;

@end
