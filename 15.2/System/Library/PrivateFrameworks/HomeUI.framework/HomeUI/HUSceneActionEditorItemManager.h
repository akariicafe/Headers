@class HFActionSetBuilder, NSMutableDictionary, NSSet, HFStaticItem;

@interface HUSceneActionEditorItemManager : HFItemManager

@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) HFStaticItem *nameAndIconItem;
@property (readonly, nonatomic) NSMutableDictionary *actionGridItemsByEditorType;
@property (retain, nonatomic) HFStaticItem *mediaItem;
@property (retain, nonatomic) HFStaticItem *changeServicesItem;
@property (retain, nonatomic) HFStaticItem *testSceneItem;
@property (retain, nonatomic) HFStaticItem *favoriteItem;
@property (retain, nonatomic) HFStaticItem *deleteSceneItem;
@property (readonly, nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSSet *prioritizedServices;
@property (readonly, nonatomic) NSSet *actionGridItems;
@property (readonly, nonatomic) NSSet *instructionsItems;
@property (readonly, nonatomic) HFStaticItem *mediaInstructionsItem;
@property (readonly, nonatomic) NSSet *itemsToHideWhenEmpty;

+ (id)sectionIdentifierForActionGridEditorType:(unsigned long long)a0;
+ (unsigned long long)actionGridEditorTypeForSectionIdentifier:(id)a0;
+ (id)allActionGridEditorSectionIdentifiers;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (void)_createItemsForActionGridEditorType:(unsigned long long)a0 home:(id)a1;
- (id)_buildSectionForActionGridEditorType:(unsigned long long)a0;
- (id)initWithActionSetBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;

@end
