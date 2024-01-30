@class NSError, NSXPCConnection;

@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising> {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSError *error;

+ (id)interactionAdvisor;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServiceName:(id)a0;
- (id)rankCandidateContacts:(id)a0 usingSettings:(id)a1;
- (id)adviseInteractionsForDate:(id)a0 usingSettings:(id)a1;
- (id)adviseInteractionsForLocation:(id)a0 usingSettings:(id)a1;
- (id)adviseSocialInteractionsForDate:(id)a0 andSeedContacts:(id)a1 usingSettings:(id)a2;
- (id)adviseInteractionsForKeywordsInString:(id)a0 usingSettings:(id)a1;
- (void)tuneSocialAdvisorUsingSettings:(id)a0 heartBeatHandler:(id)a1;
- (id)adviseInteractionsUsingSettings:(id)a0;

@end
