@class NSDate, NSString, NSArray, NSOperationQueue, NSDateInterval, NSDictionary, NSObject, ACHEarnedInstanceStore, ACHDataStore;
@protocol ACHEarnedInstanceAwarding, OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingSourceRecord : NSObject <ACHDataStorePropertyProviding> {
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDateInterval *_lastScheduledEvaluationInterval;
    NSDateInterval *_lastCompletedEvaluationInterval;
}

@property (readonly, nonatomic) id<ACHEarnedInstanceAwarding> source;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic) NSDateInterval *lastScheduledEvaluationInterval;
@property (readonly, nonatomic) NSDateInterval *lastCompletedEvaluationInterval;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAllEvaluationOperations;
- (void)dataStoreDidClearAllProperties:(id)a0 completion:(id /* block */)a1;
- (id)initWithSource:(id)a0 earnedInstanceStore:(id)a1 dataStore:(id)a2 registrationDate:(id)a3;
- (void)addEvaluationOperationWithDateInterval:(id)a0 databaseContext:(id)a1 evaluationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)addEvaluationOperationWithDateInterval:(id)a0 evaluationBlock:(id /* block */)a1 completion:(id /* block */)a2;

@end
