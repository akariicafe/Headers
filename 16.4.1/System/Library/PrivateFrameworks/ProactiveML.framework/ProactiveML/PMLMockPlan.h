@class NSString, PMLTrainingStore;

@interface PMLMockPlan : NSObject <PMLPlanProtocol> {
    PMLTrainingStore *_store;
    BOOL _returnValue;
}

@property (readonly, nonatomic) NSString *planId;
@property unsigned long long version;
@property (readonly, nonatomic) BOOL didRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearLastDeserializedPlans;
+ (id)lastDeserializedPlanWithId:(id)a0;
+ (id)lastDeserializedPlansMap;
+ (void)setLastDeserializedPlanWithId:(id)a0 toPlan:(id)a1;

- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)runWithError:(id *)a0;
- (id)initWithPlanId:(id)a0;
- (id)initWithPlanId:(id)a0 store:(id)a1;
- (id)initWithPlanId:(id)a0 store:(id)a1 version:(unsigned long long)a2 returningAfterRunning:(BOOL)a3;
- (id)initWithPlanId:(id)a0 version:(unsigned long long)a1;
- (id)initWithPlanId:(id)a0 version:(unsigned long long)a1 returningAfterRunning:(BOOL)a2;

@end
