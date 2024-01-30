@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface PHAAssetProcessingJob : PHAWorkerJob

@property (readonly) NSRecursiveLock *resultsLock;
@property (readonly, copy, nonatomic) NSArray *incompleteAssetLocalIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *resultsByAssetLocalIdentifier;
@property (readonly, nonatomic) NSArray *assetLocalIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (unsigned long long)resultCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)finished;
- (float)completionScore;
- (id)_resultsCopy;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 assetLocalIdentifiers:(id)a2 library:(id)a3;
- (unsigned long long)successfulResultCount;
- (unsigned long long)resultForAssetLocalIdentifier:(id)a0;
- (void)reportResult:(unsigned long long)a0 forAssetLocalIdentifier:(id)a1;

@end
