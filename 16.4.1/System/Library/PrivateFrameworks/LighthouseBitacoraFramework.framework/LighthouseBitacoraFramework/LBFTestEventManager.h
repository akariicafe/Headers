@class NSDictionary, NSString, NSDateFormatter;

@interface LBFTestEventManager : NSObject

@property (retain, nonatomic) NSDictionary *syntheticData;
@property (readonly, nonatomic) NSString *readCategory;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) NSDictionary *eventStore;
@property (readonly, nonatomic) NSString *datasetName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)ensureBiomeManagerLighthouse;
- (id)ensureBiomeManagerMLRuntimed;
- (id)ensureBiomeManagerTrial;
- (BOOL)generateEventStore;
- (id)generateOutcomeDict;
- (id)lighthouseEventFromDict:(id)a0;
- (BOOL)loadSyntheticData:(id)a0;
- (BOOL)loadSyntheticJSON:(id)a0 datasetName:(id)a1;
- (id)mlRuntimedEventFromDict:(id)a0;
- (id)readData:(id)a0 endDate:(id)a1;
- (id)trialEventFromDict:(id)a0;
- (id)trialIdentifiersFromJSON:(id)a0;
- (BOOL)validateOutcomes:(id)a0 withAggregatedStates:(id)a1;

@end
