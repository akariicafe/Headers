@class UICollectionViewLayout, NSMapTable, UICollectionView, NSMutableIndexSet, NSMutableDictionary, NSMutableArray;

@interface UICollectionViewData : NSObject {
    UICollectionView *_collectionView;
    UICollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validLayoutRect;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct CGSize { double width; double height; } _contentSize;
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    struct { unsigned char contentSizeIsValid : 1; unsigned char itemCountsAreValid : 1; unsigned char layoutIsPreparing : 1; unsigned char layoutIsPrepared : 1; unsigned char layoutLocked : 1; } _collectionViewDataFlags;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _sectionItemCounts;
    struct unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>> { struct __hash_table<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>> { float __value_; } __p3_; } __table_; } _globalItemMap;
    long long _totalItemCount;
}

+ (void)initialize;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_TEST_validLayoutRect;
- (id).cxx_construct;

@end
