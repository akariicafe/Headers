@class StopWatch, NSString, NSDictionary, AWDSymptomsAdvisoryAlternateNetworkType, NSMutableArray;

@interface State : NSObject

@property (readonly) NSString *label;
@property (readonly) unsigned long long rank;
@property (readonly) NSDictionary *entryCellPreds;
@property (readonly) NSDictionary *entryWiFiPreds;
@property (readonly) StopWatch *sojournTime;
@property (copy, nonatomic) id /* block */ entryAction;
@property (copy, nonatomic) id /* block */ loopEvaluation;
@property (copy, nonatomic) id /* block */ exitAction;
@property int loopTokens;
@property (retain) State *previousState;
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType *awdMetric;
@property (readonly) NSMutableArray *digest;

+ (id)createStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryCellPreds:(id)a2 entryWiFiPreds:(id)a3;
+ (id)createAndInitializeAWDMetricForStateWithLevel:(int)a0 activationIdentifier:(unsigned int)a1 policy:(int)a2 andSignature:(id)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryCellPreds:(id)a2 entryWiFiPreds:(id)a3;

@end
