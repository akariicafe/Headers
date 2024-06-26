@class NSString, NSArray, MPMediaQuerySectionInfo, MPMediaLibrary, MPMediaItemCollection, NSSet, NSDictionary, MPMediaPlaylist, MPMediaQueryCriteria;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying> {
    MPMediaLibrary *_mediaLibrary;
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    NSArray *_staticEntities;
    long long _staticEntityType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MPMediaPlaylist *containingPlaylist;
@property (readonly, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;
@property (copy, nonatomic, getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:) NSDictionary *orderingDirectionMappings;
@property (nonatomic) BOOL sortItems;
@property (nonatomic) BOOL useSections;
@property (nonatomic) unsigned long long entityLimit;
@property (readonly, nonatomic) BOOL _hasItems;
@property (readonly, nonatomic) BOOL _hasCollections;
@property (readonly, nonatomic) unsigned long long _countOfItems;
@property (readonly, nonatomic) unsigned long long _countOfCollections;
@property (readonly, nonatomic) BOOL _hasStaticEntities;
@property (readonly, nonatomic) NSArray *itemPersistentIdentifiers;
@property (readonly, nonatomic) NSArray *collectionPersistentIdentifiers;
@property (readonly, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;
@property (readonly, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (readonly, nonatomic) BOOL specifiesPlaylistItems;
@property (nonatomic) BOOL shouldIncludeNonLibraryEntities;
@property (readonly, nonatomic) BOOL willGroupEntities;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (readonly, nonatomic) MPMediaItemCollection *_representativeCollection;
@property (readonly, nonatomic) long long _representativeCollectionGroupingType;
@property (readonly, nonatomic, getter=isPlaylistItemsQuery) BOOL playlistItemsQuery;
@property (retain, nonatomic) NSSet *filterPredicates;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *collections;
@property (nonatomic) long long groupingType;
@property (readonly, nonatomic) NSArray *itemSections;
@property (readonly, nonatomic) NSArray *collectionSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)movieRentalsQuery;
+ (id)genresQuery;
+ (id)videosQuery;
+ (id)ITunesUAudioQuery;
+ (id)playlistsQuery;
+ (id)composersQuery;
+ (id)activeGeniusPlaylist;
+ (id)audiobooksQuery;
+ (id)ITunesUQuery;
+ (id)moviesQuery;
+ (id)videoITunesUQuery;
+ (void)initFilteringDisabled;
+ (id)albumsQuery;
+ (id)geniusMixesQuery;
+ (id)artistsQuery;
+ (id)tvShowsQuery;
+ (void)setFilteringDisabled:(BOOL)a0;
+ (id)musicVideosQuery;
+ (BOOL)isFilteringDisabled;
+ (id)videoPodcastsQuery;
+ (id)homeVideosQuery;
+ (id)podcastsQuery;
+ (id)currentDevicePurchasesPlaylist;
+ (id)songsQuery;
+ (id)playbackHistoryPlaylist;
+ (id)playlistsRecentlyAddedQuery;
+ (id)audioPodcastsQuery;
+ (id)albumArtistsQuery;
+ (id)compilationsQuery;
+ (id)audibleAudiobooksQuery;

- (id)initWithProtobufferDecodableObject:(id)a0;
- (id)initWithFilterPredicates:(id)a0 library:(id)a1;
- (id)valueForAggregateFunction:(id)a0 onCollectionsForProperty:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFilterPredicates:(id)a0;
- (void)removeFilterPredicate:(id)a0;
- (void)_enumerateCollectionPersistentIDsInOrder:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)removePredicatesForProperty:(id)a0;
- (void)_enumerateItemPersistentIDsInOrder:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)_getRepresentativeCollectionGrouping:(long long *)a0 propertyPredicate:(id *)a1;
- (void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(id /* block */)a0;
- (id)predicateForProperty:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateCollectionPersistentIDsUsingBlock:(id /* block */)a0;
- (void)_enumerateItemsUsingBlock:(id /* block */)a0;
- (id)copyByRemovingStaticEntities;
- (unsigned long long)groupingThreshold;
- (id)initWithCriteria:(id)a0 library:(id)a1;
- (void)_enumerateUnorderedItemsUsingBlock:(id /* block */)a0;
- (id)initWithEntities:(id)a0 entityType:(long long)a1;
- (void)_enumerateItemsInOrder:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)criteria;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateCollectionsUsingBlock:(id /* block */)a0;
- (id)protobufferEncodableObject;
- (id)_valueForAggregateFunction:(id)a0 onProperty:(id)a1 entityType:(long long)a2;
- (unsigned long long)_playlistItemPersistentIDForItemPersistentID:(unsigned long long)a0;
- (void)setCriteria:(id)a0;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (BOOL)MPSD_hasDownloadableEntities;
- (void)_enumerateUnorderedItemPersistentIDsUsingBlock:(id /* block */)a0;
- (void)setFilterPropertyPredicate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyBySanitizingStaticEntities;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (id)valueForAggregateFunction:(id)a0 onItemsForProperty:(id)a1;
- (void)_enumerateCollectionsInOrder:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)setStaticEntities:(id)a0 entityType:(long long)a1;
- (id)init;
- (void)addFilterPredicate:(id)a0;
- (BOOL)MPSD_hasDownloadingEntities;
- (void)setFilterPredicate:(id)a0 forProperty:(id)a1;
- (BOOL)_isFilteringDisabled;
- (void)_enumerateUnorderedCollectionsUsingBlock:(id /* block */)a0;
- (id)MPSD_mediaQueryForDownloadableEntities;
- (void).cxx_destruct;
- (BOOL)_updatePredicateForProperty:(id)a0 withPropertyPredicate:(id)a1;

@end
