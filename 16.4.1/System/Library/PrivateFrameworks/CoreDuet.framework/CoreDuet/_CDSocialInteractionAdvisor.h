@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)a0 andSeedContacts:(id)a1 usingSettings:(id)a2;
- (id)inSeedPredicateForSeed:(id)a0;
- (id)keyForModelWithSettings:(id)a0;
- (id)rankContacts:(id)a0 withSeedContacts:(id)a1 usingSettings:(id)a2;
- (id)recentPredicateForDate:(id)a0 lambda:(float)a1 lookAheadWeeks:(int)a2;
- (void)tuneUsingSettings:(id)a0 heartBeatHandler:(id)a1;

@end
