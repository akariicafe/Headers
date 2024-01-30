@class NSMutableDictionary;

@interface MPMediaLibraryEntityTranslator : NSObject {
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
}

@property (readonly, nonatomic) Class MPModelClass;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, nonatomic) void *entityClass;
@property (copy, nonatomic) id /* block */ allowedItemPredicatesBlock;
@property (copy, nonatomic) id /* block */ entityQueryBlock;

+ (id)translatorForTransientMPModelClass:(Class)a0;
+ (id)_translatorForMPModelClass:(Class)a0 mlcoreEntityClass:(void *)a1 create:(BOOL)a2 transient:(BOOL)a3;
+ (id)translatorForMPModelClass:(Class)a0;
+ (id)translatorForMPModelClass:(Class)a0 mlcoreEntityClass:(void *)a1;

- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; struct ModelPropertyBase **x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; } x2; })_MLCorePropertiesForPropertySet:(id)a0 withForeignPropertyBase:(void *)a1;
- (struct unordered_map<std::string, mlcore::ModelPropertyBase *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> { struct __hash_table<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>, true>> { float x0; } x3; } x0; })propertiesToFetchForPropertyKey:(id)a0;
- (id)identifiersForPropertyCache:(const void *)a0 context:(id)a1;
- (Class)classForRelationshipKey:(id)a0;
- (id)objectForPropertySet:(id)a0 entityClass:(void *)a1 propertyCache:(const void *)a2 context:(id)a3;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; struct ModelPropertyBase **x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; } x2; })MLCorePropertiesForPropertySet:(id)a0;
- (struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor *x0; struct SortDescriptor *x1; struct __compressed_pair<mlcore::SortDescriptor *, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor *x0; } x2; })MLCoreSortDescriptorsForModelSortDescriptors:(id)a0;
- (struct shared_ptr<mlcore::PropertiesQuery> { struct PropertiesQuery *x0; struct __shared_weak_count *x1; })propertiesQueryForPropertySet:(id)a0 scopedContainers:(id)a1 allowedItemIdentifiers:(id)a2 view:(id)a3;
- (void)mapPropertyKey:(id)a0 withPropertiesToFetch:(const void *)a1 propertiesToSort:(const void *)a2 sortTransformer:(id /* block */)a3 valueTransformer:(id /* block */)a4;
- (void)mapPropertyKey:(id)a0 withPropertiesToFetch:(const void *)a1 propertiesToSort:(const void *)a2 sortTransformer:(id /* block */)a3 filterTransformer:(id /* block */)a4 valueTransformer:(id /* block */)a5;
- (struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery *x0; struct __shared_weak_count *x1; })entityQueryForPropertySet:(id)a0 sortDescriptors:(id)a1 context:(id)a2 view:(id)a3;
- (void)mapPropertyKey:(id)a0 toMLProperty:(void *)a1;
- (void)mapPropertyKey:(id)a0 withPropertiesToFetch:(const void *)a1 valueTransformer:(id /* block */)a2;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 usingForeignPropertyBase:(void *)a2;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 transient:(BOOL)a2 usingForeignPropertyBase:(void *)a3;
- (id)_propertyTranslatorForKeyPath:(id)a0;
- (void)mapIdentifierMLProperties:(const void *)a0 identifierCreationBlock:(id /* block */)a1;
- (id)_objectForPropertySet:(id)a0 entityClass:(void *)a1 propertyCache:(const void *)a2 baseTranslator:(id)a3 prependKeyPath:(id)a4 context:(id)a5;
- (struct vector<std::shared_ptr<mlcore::Predicate>, std::allocator<std::shared_ptr<mlcore::Predicate>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<mlcore::Predicate> *, std::allocator<std::shared_ptr<mlcore::Predicate>>> { void *x0; } x2; })MLCorePredicateForModelPropertyFilters:(id)a0;
- (struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x0; struct __shared_weak_count *x1; })_propertyMapForKeyPath:(id)a0 includePropertiesToSort:(BOOL)a1;
- (void *)_propertyForKeyPath:(id)a0;
- (void).cxx_destruct;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 transient:(BOOL)a2 usingForeignPropertyBase:(void *)a3 relationshipValidationProperties:(const void *)a4 isValidRelationshipHandler:(id /* block */)a5;
- (id)_valueForKeyPath:(id)a0 forPropertyCache:(const void *)a1 context:(id)a2;

@end
