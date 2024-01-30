@class HFItem, HFServiceGroupBuilder, HFStaticItem;

@interface HUServiceGroupEditorItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *nameAndIconItem;
@property (retain, nonatomic) HFItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *serviceGridItem;
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) long long instructionsSectionIndex;
@property (readonly, nonatomic) long long serviceGridSectionIndex;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)initWithServiceGroupBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (id)currentSectionIdentifiers;

@end
