@class CNReputationCoreRecentsAdapter, CNReputationContactsAdapter, CNReputationLogger;
@protocol CNSchedulerProvider;

@interface CNReputationStore : NSObject

@property (readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter;
@property (readonly, nonatomic) CNReputationLogger *logger;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;

- (id)init;
- (id)makeFutureForHandle:(id)a0;
- (id)reputationForHandle:(id)a0 timeout:(double)a1 error:(id *)a2;
- (id)initWithCoreRecentsAdapter:(id)a0 contactsAdapter:(id)a1 logger:(id)a2 schedulerProvider:(id)a3;
- (void).cxx_destruct;

@end
