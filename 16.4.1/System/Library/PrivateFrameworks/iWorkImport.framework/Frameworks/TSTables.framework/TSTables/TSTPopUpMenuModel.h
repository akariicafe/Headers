@class NSArray;

@interface TSTPopUpMenuModel : TSPObject <NSCopying, TSUMultipleChoiceListChoiceProviding> {
    NSArray *_items;
    unsigned long long _count;
}

+ (BOOL)needsObjectUUID;
+ (id)cellValueFromCell:(id)a0 locale:(id)a1;
+ (id)p_PopUpMenuModelDefaultWithContext:(id)a0 locale:(id)a1;
+ (void)p_appendChoices:(id)a0 uniquelyToChoices:(id)a1;
+ (id)p_cellValueFromCellWithCustomFormat:(id)a0 locale:(id)a1;
+ (id)popupMenuModelDeletingItemFromModel:(id)a0 index:(unsigned long long)a1;
+ (id)popupMenuModelEditingItemInModel:(id)a0 index:(unsigned long long)a1 newContent:(id)a2;
+ (id)popupMenuModelFromTable:(id)a0 region:(id)a1 initialValue:(BOOL *)a2 overflow:(BOOL *)a3;
+ (id)popupMenuModelReorderingModel:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;

- (id)stringAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)formatAtIndex:(unsigned long long)a0;
- (double)numberAtIndex:(unsigned long long)a0;
- (id)choices;
- (id)dateAtIndex:(unsigned long long)a0;
- (id)copyWithContext:(id)a0;
- (BOOL)booleanAtIndex:(unsigned long long)a0;
- (int)valueTypeOfItemAtIndex:(unsigned long long)a0;
- (void)saveToArchiver:(id)a0;
- (void)didInitFromSOS;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0;
- (id)initWithItems:(id)a0 context:(id)a1;
- (id)popUpItemFromDate:(id)a0 format:(id)a1;
- (id)popUpItemFromNumber:(double)a0 format:(id)a1;
- (id)popUpItemFromString:(id)a0;
- (id)displayStringAtIndex:(unsigned long long)a0;
- (BOOL)isEqualToChoices:(id)a0;
- (BOOL)p_booleanForListItem:(id)a0;
- (id)p_dateForListItem:(id)a0;
- (id)p_listItemAtIndex:(unsigned long long)a0;
- (int)p_mcListTypeForArgType:(char)a0;
- (int)p_mcListTypeOfListItem:(id)a0;
- (double)p_numberForListItem:(id)a0;
- (id)p_stringForListItem:(id)a0;
- (id)popUpItemFromBoolean:(BOOL)a0;
- (unsigned long long)tst_dataObjectHash;
- (BOOL)tst_dataObjectIsEqual:(id)a0;

@end
