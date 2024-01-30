@class NSMutableSet;

@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying> {
    struct unordered_map<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__1::hash<unsigned long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__1::equal_to<unsigned long>, true> > { float __value_; } __p3_; } __table_; } _coldDataByYear;
}

@property (retain, nonatomic) NSMutableSet *hotData;
@property (readonly, nonatomic) unsigned long long count;

+ (id)set;
+ (id)setWithSpecifierArray:(id)a0;
+ (id)setWithSpecifiers:(id)a0;
+ (id)setWithSpecifier:(id)a0;

- (void)removeSpecifier:(id)a0;
- (void)removeAllSpecifiers;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allSpecifiers;
- (BOOL)containsSpecifier:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSpecifiers:(id)a0;
- (id)setByIntersectingWithSet:(id)a0;
- (id)setOfSpecifiersNotContainedInSet:(id)a0;
- (void)insertSpecifiersFromSet:(id)a0;
- (void)removeSpecifiersFromSet:(id)a0;
- (BOOL)containsColdSpecifiers;
- (id)hotSpecifierSet;
- (void)insertSpecifier:(id)a0;
- (void)enumerateSpecifiersWithBlock:(id /* block */)a0;
- (id)hotSpecifiers;
- (id)coldSpecifiers;
- (id)hotSpecifierArray;
- (id)yearsReferenced;
- (id)coldSpecifierArrayForYear:(unsigned long long)a0;
- (void)insertSpecifiersFromArray:(id)a0;
- (id)setOfSpecifiersContainedInSet:(id)a0;
- (id)coldSpecifierSet;
- (BOOL)containsSpecifiersWithSymbol:(id)a0;
- (BOOL)containsSpecifiersFromSet:(id)a0;
- (id)setByIntersectingWithSymbolsOfSet:(id)a0;
- (id)allSymbols;
- (id)setByRemovingSpecifiersFromSet:(id)a0;
- (id)initWithSpecifierArray:(id)a0;
- (void)p_enumerateYearSetsWithBlock:(id /* block */)a0;
- (unsigned long long)p_coldSpecifierCount;
- (id)setOfSpecifiersPassingTest:(id /* block */)a0;
- (id)p_description:(BOOL)a0;
- (void)removeSpecifiersFromArray:(id)a0;
- (id)coldSpecifiersForYear:(unsigned long long)a0;
- (id)sortedArrayOfSpecifiers;
- (id)setByRemovingSpecifiersWithSymbols:(id)a0;
- (id)setOfSpecifiersWithSymbol:(id)a0;
- (id)setOfSpecifiersWithDate:(id)a0;

@end
