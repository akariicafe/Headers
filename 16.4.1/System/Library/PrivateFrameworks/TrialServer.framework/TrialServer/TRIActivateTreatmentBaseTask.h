@class NSDate;

@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask {
    NSDate *_startTime;
}

@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) BOOL requiresTreatmentInstallation;

- (id)runTaskUsingContext:(id)a0;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void)setStartTime:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)startTime;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;
- (BOOL)_experimentRecord:(id)a0 hasConflictWithExperimentsInDatabase:(id)a1 conflictEndTime:(id *)a2;
- (id)_nextTasksForRunStatus:(int)a0;
- (BOOL)_writeNamespaceDescriptorsWithPaths:(id)a0 toTreatmentLayer:(unsigned long long)a1 forExperiment:(id)a2 treatmentURLs:(id)a3 context:(id)a4;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(BOOL)a3;
- (BOOL)updateLoggingWithExperimentRecord:(id)a0 paths:(id)a1 trackingId:(id)a2 newLogTreatmentAddedOut:(id *)a3;

@end
