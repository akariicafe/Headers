@class NSString, NSArray, APOdmlXpcLifecycleHandler, _DKKnowledgeStore, NSMutableDictionary, APOdmlVector, NSMutableArray, APOdmlUnfairLock;

@interface APOdmlVectorBuilder : NSObject

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) APOdmlVector *vector;
@property (nonatomic) double vectorWeightTotal;
@property (retain, nonatomic) APOdmlUnfairLock *setVectorAndWeightLock;
@property (retain, nonatomic) NSMutableDictionary *adamIDtoBundleID;
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task;
@property (nonatomic) double lookbackPeriod;
@property (nonatomic) long long maxQueryElements;
@property (nonatomic) double exponentialDecayConstant;
@property (nonatomic) BOOL weightByDuration;
@property (nonatomic) BOOL assetManagerIsCounterfactual;
@property (retain, nonatomic) _DKKnowledgeStore *knowledgeStore;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSMutableArray *consumedEvents;

- (id)executeQuery:(id)a0;
- (BOOL)shouldDefer;
- (id)eventName;
- (void).cxx_destruct;
- (id)retrieveVector:(id *)a0;
- (id)adamIDForBundleID:(id)a0;
- (void)addAppVector:(id)a0;
- (void)buildBundleIDtoAdamIDCache:(id)a0;
- (id)descriptionForEvent:(id)a0;
- (id)eventsBetween:(id)a0 and:(id)a1 withLimit:(unsigned long long)a2;
- (id)eventsForLookbackPeriod:(double)a0;
- (id)initWithVersion:(id)a0 lookbackPeriod:(id)a1 maxQueryElements:(id)a2 task:(id)a3 exponentialDecayConstant:(id)a4 weightByDuration:(id)a5 isCounterfactual:(BOOL)a6;
- (id)pullEvents;
- (id)retrieveFilteredEvents:(id)a0;
- (id)updateVector:(id)a0 withVector:(id)a1 usingWeight:(double)a2;
- (double)weightForEvents:(id)a0;

@end
