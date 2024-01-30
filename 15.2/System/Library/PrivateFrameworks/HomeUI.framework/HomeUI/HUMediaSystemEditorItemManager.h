@class HFStaticItem, HFMediaSystemBuilder, HFItem;

@interface HUMediaSystemEditorItemManager : HFItemManager

@property (retain, nonatomic) HFItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *serviceGridItem;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) HFStaticItem *nameAndIconItem;
@property (readonly, nonatomic) long long instructionsSectionIndex;
@property (readonly, nonatomic) long long serviceGridSectionIndex;

- (void).cxx_destruct;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (unsigned long long)_numberOfSections;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)currentSectionIdentifiersSnapshot;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)currentSectionIdentifiers;
- (id)initWithMediaSystemBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;

@end
