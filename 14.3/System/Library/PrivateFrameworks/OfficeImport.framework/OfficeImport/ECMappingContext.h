@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {
    struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary { } *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)mappingInfoCount;
- (struct ChVector<OcText> { struct OcText *x0; struct OcText *x1; struct __compressed_pair<OcText *, ChAllocator<OcText> > { struct OcText *x0; } x2; } *)mappedSheetNames;
- (unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)a0;
- (unsigned long long)mappedSheetIndexForSheetName:(id)a0;
- (id)mappingInfoForObject:(id)a0;
- (id)mappingInfoAtIndex:(unsigned long long)a0;
- (void)associateMappingInfo:(id)a0 withSheetName:(id)a1 andSheetIndex:(unsigned long long)a2 andObject:(id)a3;

@end
