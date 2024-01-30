@class NSArray, NSPredicate, NSSet;

@interface _DKBiomeQuery : NSObject {
    NSArray *_eventStreamNames;
    NSPredicate *_predicate;
    unsigned long long _limit;
    unsigned long long _offset;
    NSArray *_sortDescriptors;
    long long _resultType;
    NSArray *_groupByProperties;
    BOOL _returnDistinctResults;
    BOOL _readMetadata;
    NSSet *_excludedMetadataKeys;
}

+ (BOOL)canShimDuetStreamNamed:(id)a0;
+ (BOOL)validateSortDescriptors:(id)a0;
+ (id)duetExclusiveStreamsFromEventStreams:(id)a0;
+ (id)eventStreamsFromPredicate:(id)a0;
+ (id)deletionPredicateFromArray:(id)a0;
+ (id)eventStreamsFromArray:(id)a0;
+ (BOOL)shimDisabled;
+ (id)biomeExclusiveStreamsFromEventStreams:(id)a0;

- (id)executeBiomeQueryError:(id *)a0;
- (id)initWithEventStreams:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 sortDescriptors:(id)a4 resultType:(long long)a5 groupByProperties:(id)a6 returnDistinctResults:(BOOL)a7 readMetadata:(BOOL)a8 excludedMetadataKeys:(id)a9;
- (id)publisherForQueryWithError:(id *)a0;
- (id)_publisherForQueryReturningIndividualResults:(BOOL)a0 error:(id *)a1;
- (id)initWithDKEventQuery:(id)a0;
- (void)_setBiomeStreamWithBlock:(id /* block */)a0;
- (id)_getCachedStreamForIdentifier:(id)a0;
- (id)filterExcludedMetadataWithDKEvent:(id)a0;
- (id)bmdkEventStreams;
- (unsigned long long)executeDeletionQuery:(id *)a0;
- (id)initWithDeletionPredicate:(id)a0;
- (id)_publisherForStreams:(id)a0;
- (id)initWithDeletionArray:(id)a0;
- (void).cxx_destruct;
- (BOOL)prepareQuery:(id *)a0;

@end
