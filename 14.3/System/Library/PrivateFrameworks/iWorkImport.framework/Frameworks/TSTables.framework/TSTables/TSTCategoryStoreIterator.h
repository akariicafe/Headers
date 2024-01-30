@class TSTColumnRowUIDMap, TSTTableDataStore, TSTCell, TSTTableTile, NSObject, TSTCellRegion, TSTGroupBy, NSString, TSTSummaryCellVendor, NSIndexSet, TSTCategoryTranslator, TSTTableTileRowInfo, TSTTableInfo;
@protocol TSTCellRegionIterating;

@interface TSTCategoryStoreIterator : NSObject <TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating> {
    struct unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::__1::hash<TSUViewColumnIndex>, std::__1::equal_to<TSUViewColumnIndex>, std::__1::allocator<std::__1::pair<const TSUViewColumnIndex, TSUModelColumnIndex> > > { struct __hash_table<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__1::__unordered_map_hasher<TSUViewColumnIndex, std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__1::hash<TSUViewColumnIndex>, true>, std::__1::__unordered_map_equal<TSUViewColumnIndex, std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__1::equal_to<TSUViewColumnIndex>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUViewColumnIndex, std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__1::hash<TSUViewColumnIndex>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUViewColumnIndex, std::__1::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__1::equal_to<TSUViewColumnIndex>, true> > { float __value_; } __p3_; } __table_; } _mapFromViewToBaseColumnInCurrentRow;
    TSTCell *_tempSummaryCell;
}

@property (readonly, nonatomic) TSTTableInfo *info;
@property (readonly, weak, nonatomic) TSTGroupBy *groupBy;
@property (readonly, nonatomic) TSTCategoryTranslator *translator;
@property (readonly, weak, nonatomic) TSTTableDataStore *baseDataStore;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *baseMap;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *viewMap;
@property (readonly, weak, nonatomic) TSTSummaryCellVendor *summaryCellVendor;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *summaryMap;
@property (readonly, nonatomic) TSTCellRegion *region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator;
@property (nonatomic) unsigned long long searchMask;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } curCellID;
@property (nonatomic) unsigned int curRowIndex;
@property (readonly, nonatomic) unsigned short categoryColumnIndex;
@property (nonatomic) BOOL isSummaryRow;
@property (nonatomic) BOOL isLabelRow;
@property (nonatomic) unsigned char groupLevel;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } uuid;
@property (nonatomic) unsigned int baseRowIndex;
@property (retain, nonatomic) TSTTableTile *baseTile;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } baseTileRange;
@property (retain, nonatomic) TSTTableTileRowInfo *baseRow;
@property (readonly, nonatomic) TSTCell *cell;
@property (nonatomic) BOOL rightToLeft;
@property (nonatomic) BOOL terminated;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel1;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel2;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel3;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel4;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel5;
@property (retain, nonatomic) NSIndexSet *viewColumnIndexesInCurrentRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;

- (void)terminate;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (BOOL)getNextCellData:(id *)a0;
- (id)initWithInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (void)iterateCellsUsingBlock:(id /* block */)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)updateCellData:(id)a0;
- (void)updateFormulaForCellData:(id)a0;
- (id)nextCellData;
- (id)tempSummaryCell;
- (BOOL)p_searchSummaryVendorCell:(id)a0 searchFlags:(unsigned long long)a1;

@end
