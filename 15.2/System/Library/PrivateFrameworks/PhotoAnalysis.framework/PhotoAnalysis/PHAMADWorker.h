@interface PHAMADWorker : PHAWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _turboProcessingEnabled;
}

+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
+ (BOOL)mediaanalysisdProcessingEnabled;

- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)statusAsDictionary;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;

@end
