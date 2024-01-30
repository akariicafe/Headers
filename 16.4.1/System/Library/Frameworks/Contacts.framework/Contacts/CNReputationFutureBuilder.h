@class CNReputationLogger, CNReputationContactsAdapter, CNFuture, CNReputationHandle, CNReputationCoreRecentsAdapter;

@interface CNReputationFutureBuilder : NSObject

@property (readonly, copy, nonatomic) CNReputationHandle *handle;
@property (readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter;
@property (readonly, nonatomic) CNReputationLogger *logger;
@property (retain, nonatomic) CNFuture *scoreFuture;

- (id)build;
- (void).cxx_destruct;
- (void)addContactsTrustForEmailAddress;
- (void)addContactsTrustForPhoneNumber;
- (void)addCoreRecentsTrust;
- (id)contactsTrustForEmailAddress:(id)a0;
- (id)contactsTrustForPhoneNumber:(id)a0;
- (id)coreRecentsTrustForHandle:(id)a0;
- (id)initWithHandle:(id)a0 coreRecentsAdapter:(id)a1 contactsAdapter:(id)a2 logger:(id)a3;

@end
