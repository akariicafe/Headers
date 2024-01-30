@class NSString, MPPropertySet, MPMediaLibraryView, NSDictionary, MPMediaLibraryEntityTranslationContext, NSMutableDictionary, MPSectionedCollection, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<mlcore::EntityCache> *, std::allocator<std::shared_ptr<mlcore::EntityCache>>> { void *__value_; } __end_cap_; } _entityCaches;
}

@property (retain, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (retain, nonatomic) MPMediaLibraryEntityTranslationContext *translatingContext;
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse;
@property (retain, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)a0 personalizationProperties:(id)a1 overrideLibraryAddedStatus:(long long)a2;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 identifiers:(id)a1 personalizationProperties:(id)a2;
+ (id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)a0 requestedProperties:(id)a1;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 libraryPlaybackPosition:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)a0 libraryObject:(id)a1 personalizationProperties:(id)a2 overrideLibraryAddedStatus:(long long)a3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)a0 libraryAsset:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedLyricsWithUnpersonalizedLyrics:(id)a0 libraryLyrics:(id)a1 identifiers:(id)a2 personalizationProperties:(id)a3;

- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (struct shared_ptr<mlcore::EntityCache> { struct EntityCache *x0; struct __shared_weak_count *x1; })_entityCacheForEntityClass:(void *)a0 propertiesToFetch:(struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; struct ModelPropertyBase **x1; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase **x0; } x2; })a1;
- (id)_libraryObjectWithRelativeModelClass:(Class)a0 identifierSet:(id)a1 propertySet:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id).cxx_construct;
- (id)identifiersForItemAtIndexPath:(id)a0;

@end
