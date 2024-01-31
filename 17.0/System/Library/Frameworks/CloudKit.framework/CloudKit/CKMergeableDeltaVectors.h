@class CKDistributedTimestampStateVector, CKDistributedTimestampClockVector;

@interface CKMergeableDeltaVectors : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDistributedTimestampClockVector *previous;
@property (readonly, copy, nonatomic) CKDistributedTimestampStateVector *contents;
@property (readonly, copy, nonatomic) CKDistributedTimestampStateVector *removals;
@property (readonly, copy, nonatomic) CKDistributedTimestampClockVector *dependencies;

+ (BOOL)mergeTimestamps:(id)a0 intoDeltaMetadataVectors:(id)a1 error:(id *)a2;
+ (BOOL)addToAttributedVector:(id)a0 fromPVersionVector:(id)a1 forSiteIdentifier:(id)a2 error:(id *)a3;
+ (id)mergeableDeltaMetadataVectorsByCombiningVectors:(id)a0;
+ (id)pDistributedTimestampsFromDeltaMetadataVectors:(id)a0;
+ (id)pDistributedTimestampsWithPreviousVector:(id)a0 contentsVector:(id)a1 removalsVector:(id)a2 dependenciesVector:(id)a3;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validate:(id *)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (id)initWithPreviousStateVector:(id)a0 currentStateVector:(id)a1;
- (id)initWithPreviousVector:(id)a0 contentsVector:(id)a1 removalsVector:(id)a2 dependenciesVector:(id)a3;
- (unsigned long long)protobufSize;

@end
