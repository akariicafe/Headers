@class HFActionSetBuilder, NSMutableDictionary, HFItem, NSSet, HFStaticItem;

@interface HUSceneActionEditorItemManager : HFItemManager

@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) HFStaticItem *nameAndIconItem;
@property (readonly, nonatomic) NSMutableDictionary *actionGridItemsByEditorType;
@property (retain, nonatomic) HFStaticItem *mediaItem;
@property (retain, nonatomic) HFStaticItem *changeServicesItem;
@property (retain, nonatomic) HFStaticItem *testSceneItem;
@property (retain, nonatomic) HFItem *showInHomeDashboardItem;
@property (retain, nonatomic) HFStaticItem *deleteSceneItem;
@property (readonly, nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSSet *prioritizedAccessories;
@property (readonly, nonatomic) NSSet *actionGridItems;
@property (readonly, nonatomic) NSSet *instructionsItems;
@property (readonly, nonatomic) HFStaticItem *mediaInstructionsItem;
@property (readonly, nonatomic) NSSet *itemsToHideWhenEmpty;

+ (unsigned long long)actionGridEditorTypeForSectionIdentifier:(id)a0;
+ (id)allActionGridEditorSectionIdentifiers;
+ (id)sectionIdentifierForActionGridEditorType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionForActionGridEditorType:(unsigned long long)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_createItemsForActionGridEditorType:(unsigned long long)a0 home:(id)a1;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithActionSetBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;

@end
