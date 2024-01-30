@class HMPresenceEvent;

@interface HFPresenceCondition : HFCondition

@property (retain, nonatomic) HMPresenceEvent *presenceEvent;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0;
- (id)hf_naturalLanguageSummaryWithOptions:(id)a0;
- (id)initWithPresenceEvent:(id)a0;

@end
