@class HFItem, HFServiceGroupBuilder, HFStaticItem;

@interface HUServiceGroupEditorItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *nameAndIconItem;
@property (retain, nonatomic) HFItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *serviceGridItem;
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) long long instructionsSectionIndex;
@property (readonly, nonatomic) long long serviceGridSectionIndex;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)currentSectionIdentifiers;
- (id)currentSectionIdentifiersSnapshot;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithServiceGroupBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;

@end
