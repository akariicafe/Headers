@class NSString, PHAVisionServiceFaceProcessingWorker, PVPersonPromoter, NSObject;
@protocol OS_dispatch_queue;

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate> {
    BOOL _finished;
    float _completionScore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (retain, nonatomic) PVPersonPromoter *personPromoter;
@property (weak, nonatomic) PHAVisionServiceFaceProcessingWorker *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFinished:(BOOL)a0;
- (void).cxx_destruct;
- (id)densityClusteringForObjects:(id)a0 maximumDistance:(double)a1 minimumNumberOfObjects:(unsigned long long)a2 withDistanceBlock:(id /* block */)a3;
- (id)keyFaceForPerson:(id)a0 qualityMeasureByFace:(id)a1 updateBlock:(id /* block */)a2;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)a0 forPersons:(id)a1 overTheYearsComputation:(BOOL)a2 updateBlock:(id /* block */)a3;
- (BOOL)finished;
- (float)completionScore;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 library:(id)a2;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (void)setCompletionScore:(float)a0;

@end
