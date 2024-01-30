@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary { } *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)mappingInfoCount;
- (void *)mappedSheetNames;
- (unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)a0;
- (unsigned long long)mappedSheetIndexForSheetName:(id)a0;
- (id)mappingInfoForObject:(id)a0;
- (id)mappingInfoAtIndex:(unsigned long long)a0;
- (void)associateMappingInfo:(id)a0 withSheetName:(id)a1 andSheetIndex:(unsigned long long)a2 andObject:(id)a3;

@end
