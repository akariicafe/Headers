@class _CDInteractionStore, _CDSocialInteractionAdvisor, _CDQueryInteractionAdvisor, _CDTemporalInteractionAdvisor;

@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising> {
    _CDInteractionStore *_store;
    _CDTemporalInteractionAdvisor *_temporalAdvisor;
    _CDSocialInteractionAdvisor *_socialAdvisor;
    _CDQueryInteractionAdvisor *_queryAdvisor;
}

@property (readonly, nonatomic) _CDSocialInteractionAdvisor *socialAdvisor;
@property (readonly, nonatomic) _CDTemporalInteractionAdvisor *temporalAdvisor;

+ (id)interactionAdviceEngineWithStore:(id)a0;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)rankCandidateContacts:(id)a0 usingSettings:(id)a1;
- (id)adviseInteractionsForDate:(id)a0 usingSettings:(id)a1;
- (id)adviseInteractionsForLocation:(id)a0 usingSettings:(id)a1;
- (id)adviseSocialInteractionsForDate:(id)a0 andSeedContacts:(id)a1 usingSettings:(id)a2;
- (id)adviseInteractionsForKeywordsInString:(id)a0 usingSettings:(id)a1;
- (void)tuneSocialAdvisorUsingSettings:(id)a0 heartBeatHandler:(id)a1;
- (id)adviseInteractionsUsingSettings:(id)a0;

@end
