@class NSArray, NSString, HMICameraVideoAnalyzerResult, HMFUnfairLock, HMICameraVideoAnalyzer;

@interface HMICameraVideoAnalyzerHistory : HMFObject <HMFLogging>

@property long long predictions;
@property long long repetitions;
@property long long totalPredictions;
@property long long totalRepetitions;
@property long long totalRequests;
@property (retain) HMICameraVideoAnalyzerResult *lastRequestResult;
@property (retain) NSArray *lastRequestSignificantEvents;
@property (readonly, weak) HMICameraVideoAnalyzer *analyzer;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) long long minRepetitions;
@property (readonly) long long maxPredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithMinRepetitions:(long long)a0 maxPredictions:(long long)a1 analyzer:(id)a2;
- (void)addRequest:(id)a0 result:(id)a1 significantEvents:(id)a2;
- (BOOL)shouldPredictRequest:(id)a0;
- (id)predictedSignificantEventsForRequest:(id)a0;
- (id)predictedResultForRequest:(id)a0;

@end
