@class NSSet, NSArray, NSMutableSet, NSDictionary;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    BOOL _useSections;
}

@property (readonly, nonatomic) BOOL specifiesPlaylistItems;
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSMutableSet *filterPredicates;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (nonatomic) long long groupingType;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic) unsigned long long entityOrder;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL includeNonLibraryEntities;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings;

- (void)removeFilterPredicate:(id)a0;
- (void)removePredicatesForProperty:(id)a0;
- (id)predicateForProperty:(id)a0;
- (id)ML3CollectionsQueryInLibrary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)addFilterPredicate:(id)a0;
- (id)description;
- (id)ML3ItemsQueryInLibrary:(id)a0 orderingTerms:(id)a1 nameBlankProperty:(id)a2;
- (id)ML3OrderingTermsForGroupingType:(long long)a0;
- (void)addFilterPredicates:(id)a0;
- (id)ML3ItemsQueryInLibrary:(id)a0;
- (id)ML3OrderingTermsForMPOrderingProperties:(id)a0 directionalityMapping:(id)a1 entityClass:(Class)a2;
- (void).cxx_destruct;

@end
