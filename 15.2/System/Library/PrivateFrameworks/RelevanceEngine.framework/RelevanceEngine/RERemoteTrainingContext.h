@class NSMutableArray, RERemoteTrainingServer;

@interface RERemoteTrainingContext : RETrainingContext {
    NSMutableArray *_trainingElements;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_trainingInteractions;
    RERemoteTrainingServer *_trainingServer;
}

- (BOOL)isCurrent;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (void)becomeCurrent;
- (void).cxx_destruct;
- (void)trainWithElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_willSetAttributeForRemoteTraining;
- (void)_queue_setRemoteAttribute:(id)a0 forKey:(id)a1;
- (void)_willPerformRemoteTraining;
- (void)_didPerformRemoteTraining;
- (void)_didSetAttributeForRemoteTraining;
- (id)initWithProcessName:(id)a0;
- (void)_queue_enqueueRemoteTrainingForElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_queue_performRemoteTraining;
- (void)trainWithPredictionElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;

@end
