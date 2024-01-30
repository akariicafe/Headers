@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)adviseInteractionsForKeywordsInString:(id)a0 usingSettings:(id)a1;

@end
