@class NSArray;

@interface WBSPasswordWarningTopFraudTargets : NSObject

@property (readonly, nonatomic) NSArray *highPriorityFraudTargets;
@property (readonly, nonatomic) NSArray *fraudTargets;
@property (readonly, nonatomic) NSArray *financialFraudTargets;

- (void).cxx_destruct;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (id)initWithHighPriorityTargets:(id)a0 targets:(id)a1 financialTargets:(id)a2;

@end
