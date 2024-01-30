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

+ (id)_translatorForMPModelClass:(Class)a0 mlcoreEntityClass:(void *)a1 create:(BOOL)a2 transient:(BOOL)a3;
+ (id)translatorForMPModelClass:(Class)a0;
+ (id)translatorForTransientMPModelClass:(Class)a0;
+ (id)translatorForMPModelClass:(Class)a0 mlcoreEntityClass:(void *)a1;

- (void)mapIdentifierMLProperties:(const void *)a0 identifierCreationBlock:(id /* block */)a1;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 transient:(BOOL)a2 usingForeignPropertyBase:(void *)a3 relationshipValidationProperties:(const void *)a4 isValidRelationshipHandler:(id /* block */)a5;
- (void *)_propertyForKeyPath:(id)a0;
- (void)mapPropertyKey:(id)a0 toMLProperty:(void *)a1;
- (id)objectForPropertySet:(id)a0 entity:(struct shared_ptr<mlcore::Entity> { struct Entity *x0; struct __shared_weak_count *x1; })a1 context:(id)a2;
- (struct map<std::string, mlcore::ModelPropertyBase *, std::less<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> { struct __tree<std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, mlcore::ModelPropertyBase *>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>> { unsigned long long x0; } x2; } x0; })propertiesToFetchForPropertyKey:(id)a0;
- (id)_objectForPropertySet:(id)a0 entity:(struct shared_ptr<mlcore::Entity> { struct Entity *x0; struct __shared_weak_count *x1; })a1 baseTranslator:(id)a2 prependKeyPath:(id)a3 context:(id)a4;
- (struct shared_ptr<mlcore::PropertiesQuery> { struct PropertiesQuery *x0; struct __shared_weak_count *x1; })propertiesQueryForPropertySet:(id)a0 scopedContainers:(id)a1 allowedItemIdentifiers:(id)a2 view:(id)a3;
- (id)_propertyTranslatorForKeyPath:(id)a0;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; struct ModelPropertyBase **x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; } x2; })MLCorePropertiesForPropertySet:(id)a0;
- (void)mapPropertyKey:(id)a0 withPropertiesToFetch:(const void *)a1 valueTransformer:(id /* block */)a2;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 usingForeignPropertyBase:(void *)a2;
- (void).cxx_destruct;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 transient:(BOOL)a2 usingForeignPropertyBase:(void *)a3;
- (struct map<std::string, mlcore::ModelPropertyBase *, std::less<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> { struct __tree<std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, mlcore::ModelPropertyBase *>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, mlcore::ModelPropertyBase *>, std::less<std::string>, true>> { unsigned long long x0; } x2; } x0; })_propertyMapForKeyPath:(id)a0 includePropertiesToSort:(BOOL)a1;
- (Class)classForRelationshipKey:(id)a0;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; struct ModelPropertyBase **x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; } x2; })_MLCorePropertiesForPropertySet:(id)a0 withForeignPropertyBase:(void *)a1;
- (struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery *x0; struct __shared_weak_count *x1; })entityQueryForPropertySet:(id)a0 sortDescriptors:(id)a1 context:(id)a2 view:(id)a3;
- (id)_valueForKeyPath:(id)a0 forEntity:(struct shared_ptr<mlcore::Entity> { struct Entity *x0; struct __shared_weak_count *x1; })a1 context:(id)a2;
- (struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor *x0; struct SortDescriptor *x1; struct __compressed_pair<mlcore::SortDescriptor *, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor *x0; } x2; })MLCoreSortDescriptorsForModelSortDescriptors:(id)a0;
- (void)mapPropertyKey:(id)a0 withPropertiesToFetch:(const void *)a1 propertiesToSort:(const void *)a2 sortTransformer:(id /* block */)a3 valueTransformer:(id /* block */)a4;
- (id)identifiersForEntity:(struct shared_ptr<mlcore::Entity> { struct Entity *x0; struct __shared_weak_count *x1; })a0 context:(id)a1;

@end
