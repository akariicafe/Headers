@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface PHAAssetProcessingJob : PHAWorkerJob

@property (readonly) NSRecursiveLock *resultsLock;
@property (readonly, copy, nonatomic) NSArray *incompleteAssetLocalIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *resultsByAssetLocalIdentifier;
@property (readonly, nonatomic) NSArray *assetLocalIdentifiers;

- (BOOL)finished;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)resultCount;
- (id)statusAsDictionary;
- (float)completionScore;
- (void)reportResult:(unsigned long long)a0 forAssetLocalIdentifier:(id)a1;
- (id)_resultsCopy;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 assetLocalIdentifiers:(id)a2 library:(id)a3;
- (unsigned long long)successfulResultCount;
- (unsigned long long)resultForAssetLocalIdentifier:(id)a0;

@end
