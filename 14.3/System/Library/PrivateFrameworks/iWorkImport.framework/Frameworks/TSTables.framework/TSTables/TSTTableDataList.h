@class TSTTableDataListSegment, NSMutableIndexSet, NSMutableArray, NSObject;
@protocol TSDContainerInfo, TSWPStorageParent;

@interface TSTTableDataList : TSPObject <TSPCopying, TSTCompatibilityVersionProviding> {
    NSMutableArray *_segments;
    struct unordered_map<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *, TSTTableDataPayloadHash, TSTTableDataPayloadEqual, std::__1::allocator<std::__1::pair<NSObject<TSTTableDataPayloadHashing> *const, TSTTableDataObject *> > > { struct __hash_table<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, std::__1::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, true>, std::__1::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSObject<TSTTableDataPayloadHashing> *, std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<NSObject<TSTTableDataPayloadHashing> *, std::__1::__hash_value_type<NSObject<TSTTableDataPayloadHashing> *, TSTTableDataObject *>, TSTTableDataPayloadEqual, true> > { float __value_; } __p3_; } __table_; } _payloadToObjectMap;
    NSMutableIndexSet *_unusedKeySet;
}

@property (nonatomic) int listType;
@property (nonatomic) unsigned int nextID;
@property (readonly, nonatomic) BOOL useReverseMap;
@property (nonatomic) TSTTableDataListSegment *cachedSegment;
@property (nonatomic) BOOL isNewForBraveNewCell;
@property (nonatomic) NSObject<TSDContainerInfo, TSWPStorageParent> *richTextParentInfo;
@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion;

+ (Class)classForUnarchiver:(id)a0;
+ (id)stringForListType:(int)a0;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 context:(id)a1;
- (id)stringForKey:(unsigned int)a0;
- (id)copyWithContext:(id)a0;
- (id).cxx_construct;
- (unsigned long long)count;
- (void)removeObjectForKey:(unsigned int)a0;
- (id)packageLocator;
- (void)p_setupWithType:(int)a0 nextKeyID:(unsigned int)a1;
- (id)p_objectForKey:(unsigned int)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)allRichTextStorages;
- (BOOL)repairStyleDatalistStylesheetIfNecessary;
- (void)upgradeConditionalStylesToLinkedRefWithTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;
- (void)replaceFormulasUsingBlock:(id /* block */)a0;
- (void)replaceConditionalStyleSetsUsingBlock:(id /* block */)a0;
- (BOOL)containsFormulas;
- (void)upgradeCellFormatsU2_0;
- (BOOL)containsControlCellSpecs;
- (BOOL)p_shouldUseReverseMap;
- (void)p_addInitialSegment;
- (void)p_enumerateDataObjectsUsingBlock:(id /* block */)a0;
- (id)p_segmentForKey:(unsigned int)a0;
- (id)p_objectForPayload:(id)a0;
- (unsigned int)p_nextAvailableKey;
- (id)wrappedObjectForPayload:(id)a0;
- (void)p_setObject:(id)a0 atKey:(unsigned int)a1 updateReverseMap:(BOOL)a2;
- (id)listTypeString;
- (id)p_setPayload:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (void)p_clearReverseMapForObject:(id)a0 atKey:(unsigned int)a1;
- (unsigned long long)p_objectCount;
- (void)takeReferences:(unsigned int)a0 forKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (void)dropReferences:(unsigned int)a0 forKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (void)p_replaceObjectAtKey:(unsigned int)a0 withObject:(id)a1;
- (void)enumerateFormatsUsingBlock:(id /* block */)a0;
- (void)enumerateCustomFormatsUsingBlock:(id /* block */)a0;
- (void)enumerateKeysAndCountsUsingBlock:(id /* block */)a0;
- (unsigned int)refCountForKey:(unsigned int)a0;
- (void)takeReferenceForKey:(unsigned int)a0 callWillModify:(BOOL)a1;
- (void)dropReferenceForKey:(unsigned int)a0 callWillModify:(BOOL)a1;
- (unsigned int)addCellFormat:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addCommentStorage:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addConditionalStyleSet:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addFormula:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addControlCellSpec:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addFormulaError:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addImportWarningSet:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addMultipleChoiceListFormat:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addRichText:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addString:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (unsigned int)addStyle:(id)a0 atSuggestedKey:(unsigned int)a1 callWillModify:(BOOL)a2;
- (id)cellFormatForKey:(unsigned int)a0;
- (id)commentStorageForKey:(unsigned int)a0;
- (id)conditionalStyleSetForKey:(unsigned int)a0;
- (id)formulaForKey:(unsigned int)a0;
- (id)controlCellSpecForKey:(unsigned int)a0;
- (id)formulaErrorForKey:(unsigned int)a0;
- (id)importWarningSetForKey:(unsigned int)a0;
- (id)multipleChoiceListFormatForKey:(unsigned int)a0;
- (id)richTextForKey:(unsigned int)a0;
- (id)stringForKey:(unsigned int)a0 shouldWrap:(BOOL *)a1;
- (id)styleForKey:(unsigned int)a0;
- (BOOL)hasDuplicatedElements;
- (id)reassignCustomFormatUIDForPaste:(id)a0;
- (id)getRefCountsFromDataList;

@end
