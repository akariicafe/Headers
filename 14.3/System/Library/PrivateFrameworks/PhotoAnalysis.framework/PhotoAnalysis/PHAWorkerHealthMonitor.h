@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *scoresByWorkerType;
@property (readonly, nonatomic) NSMutableDictionary *cachedAverageScoresByWorkerType;
@property (readonly, nonatomic) NSMutableDictionary *lastTrimDateByWorkerType;
@property (nonatomic) double maxScoreRecentnessInterval;

- (void)_trimScoresForWorkerType:(short)a0;
- (id)_scoresForWorkerType:(short)a0;
- (BOOL)_isHealthyForWorkerType:(short)a0;
- (BOOL)isHealthyForWorkerType:(short)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (float)averageScoreForWorkerType:(short)a0;
- (float)_averageScoreForWorkerType:(short)a0;
- (float)_calculateAverageScoreForWorkerType:(short)a0;
- (id)statusAsDictionary;
- (BOOL)_needsTrimScoresForWorkerType:(short)a0;
- (void)recordResultsFromWorkerJob:(id)a0;

@end
