@class NSDate;

@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask {
    NSDate *_startTime;
}

@property (nonatomic) BOOL testingIgnoreDependencies;
@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) BOOL requiresTreatmentInstallation;

- (id)dependencies;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;
- (BOOL)updateLoggingWithExperimentRecord:(id)a0 paths:(id)a1 trackingId:(id)a2 newLogTreatmentAddedOut:(id *)a3;
- (id)_nextTasksForRunStatus:(int)a0;
- (id)runTaskUsingContext:(id)a0;
- (BOOL)_writeNamespaceDescriptorsWithPaths:(id)a0 toTreatmentLayer:(unsigned long long)a1 forExperiment:(id)a2 treatmentURLs:(id)a3 context:(id)a4;
- (id)startTime;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setStartTime:(id)a0;
- (BOOL)_experimentRecord:(id)a0 hasConflictWithExperimentsInDatabase:(id)a1 conflictEndTime:(id *)a2;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(BOOL)a3;
- (void)runDequeueHandlerUsingContext:(id)a0;

@end
