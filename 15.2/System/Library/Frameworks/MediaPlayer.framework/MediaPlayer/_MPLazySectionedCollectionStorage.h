@class NSCache;

@interface _MPLazySectionedCollectionStorage : NSObject {
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _cachedNumberOfItemsInSections;
    long long _cachedNumberOfSections;
    BOOL _hasValidCachedNumberOfSections;
    NSCache *_itemsCache;
    struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> { struct __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MPIdentifierSet *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _itemIdentifierSetMap;
    NSCache *_sectionsCache;
    struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> { struct __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MPIdentifierSet *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _sectionIdentifierSetMap;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
