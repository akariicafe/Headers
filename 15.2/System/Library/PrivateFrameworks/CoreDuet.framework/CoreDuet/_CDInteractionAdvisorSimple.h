@protocol _CDInteractionAdvising;

@interface _CDInteractionAdvisorSimple : NSObject

@property (retain) id<_CDInteractionAdvising> interactionAdvisor;

+ (id)advisorSettingsForMatchingHandles:(id)a0 mechanism:(long long)a1 date:(id)a2 count:(long long)a3;
+ (id)advisorSettingsForMatchingPersonID:(id)a0 mechanism:(long long)a1 date:(id)a2 count:(long long)a3;
+ (id)advisorSettingsForMatchingDisplayName:(id)a0 mechanism:(long long)a1 date:(id)a2 count:(long long)a3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoreDuetDaemon;
- (id)initWithInteractionAdvisor:(id)a0;
- (id)bestInteractionMatchingHandles:(id)a0 mechanism:(long long)a1;
- (id)bestInteractionMatchingContactID:(id)a0 mechanism:(long long)a1;
- (id)rankedInteractionsForHandles:(id)a0 mechanism:(long long)a1 count:(long long)a2 date:(id)a3;
- (id)rankedInteractionsForPersonId:(id)a0 mechanism:(long long)a1 count:(long long)a2 date:(id)a3;
- (id)rankedInteractionsForDisplayName:(id)a0 mechanism:(long long)a1 count:(long long)a2 date:(id)a3;
- (id)initWithCoreDuetDatabase;
- (id)bestInteractionMatchingDisplayName:(id)a0 mechanism:(long long)a1;
- (id)rankedInteractionsForHandles:(id)a0 mechanism:(long long)a1 count:(long long)a2;
- (id)rankedInteractionsForPersonId:(id)a0 mechanism:(long long)a1 count:(long long)a2;
- (id)rankedInteractionsForDisplayName:(id)a0 mechanism:(long long)a1 count:(long long)a2;

@end
