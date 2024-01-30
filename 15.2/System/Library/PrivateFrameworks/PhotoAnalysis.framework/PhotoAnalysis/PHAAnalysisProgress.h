@class NSDictionary;

@interface PHAAnalysisProgress : NSObject {
    NSDictionary *_countDictionariesByWorkerType;
    NSDictionary *_countOfDeletionsByWorkerType;
    NSDictionary *_totalProgressCountsByWorkerType;
}

+ (void)requestCurrentProgressWithLibrary:(id)a0 completion:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (id)init;
- (float)_progressFromProcessedCount:(long long)a0 outOfPossibleCount:(long long)a1;
- (id)initWithCounts:(id)a0 totalProgressCounts:(id)a1 countOfDeletionsByWorkerType:(id)a2;
- (float)percentAnalyzedForWorkerType:(short)a0;
- (float)localPercentAnalyzedForWorkerType:(short)a0;
- (unsigned long long)countOfDeletionsForWorkerType:(short)a0;

@end
