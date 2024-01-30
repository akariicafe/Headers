@class NSArray;

@interface TSTPopUpMenuModel : TSPObject <NSCopying, TSUMultipleChoiceListChoiceProviding> {
    NSArray *_items;
    unsigned long long _count;
}

+ (BOOL)needsObjectUUID;
+ (id)cellValueFromCell:(id)a0 locale:(id)a1;
+ (void)p_appendChoices:(id)a0 uniquelyToChoices:(id)a1;
+ (id)p_PopUpMenuModelDefaultWithContext:(id)a0 locale:(id)a1;
+ (id)p_cellValueFromCellWithCustomFormat:(id)a0 locale:(id)a1;
+ (id)popupMenuModelFromTable:(id)a0 region:(id)a1 initialValue:(BOOL *)a2 overflow:(BOOL *)a3;
+ (id)popupMenuModelDeletingItemFromModel:(id)a0 index:(unsigned long long)a1;
+ (id)popupMenuModelEditingItemInModel:(id)a0 index:(unsigned long long)a1 newContent:(id)a2;
+ (id)popupMenuModelReorderingModel:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;

- (id)stringAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)numberAtIndex:(unsigned long long)a0;
- (id)choices;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dateAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (int)valueTypeOfItemAtIndex:(unsigned long long)a0;
- (BOOL)booleanAtIndex:(unsigned long long)a0;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct PopUpMenuModel { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::PopUpMenuModel_CellValue> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCE::CellValueArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const struct PopUpMenuModel { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::PopUpMenuModel_CellValue> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSCE::CellValueArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; } *)a0;
- (id)popUpItemFromString:(id)a0;
- (id)formatAtIndex:(unsigned long long)a0;
- (id)popUpItemFromDate:(id)a0 format:(id)a1;
- (id)popUpItemFromNumber:(double)a0 format:(id)a1;
- (id)initWithItems:(id)a0 context:(id)a1;
- (id)displayStringAtIndex:(unsigned long long)a0;
- (BOOL)tst_dataObjectIsEqual:(id)a0;
- (unsigned long long)tst_dataObjectHash;
- (BOOL)isEqualToChoices:(id)a0;
- (int)p_mcListTypeForArgType:(int)a0;
- (int)p_mcListTypeOfListItem:(id)a0;
- (id)p_listItemAtIndex:(unsigned long long)a0;
- (double)p_numberForListItem:(id)a0;
- (id)p_stringForListItem:(id)a0;
- (id)p_dateForListItem:(id)a0;
- (BOOL)p_booleanForListItem:(id)a0;
- (id)popUpItemFromBoolean:(BOOL)a0;

@end
