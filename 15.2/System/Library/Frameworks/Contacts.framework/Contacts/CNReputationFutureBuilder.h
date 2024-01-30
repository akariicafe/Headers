@class CNReputationLogger, CNReputationContactsAdapter, CNFuture, CNReputationHandle, CNReputationCoreRecentsAdapter;

@interface CNReputationFutureBuilder : NSObject

@property (readonly, copy, nonatomic) CNReputationHandle *handle;
@property (readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter;
@property (readonly, nonatomic) CNReputationLogger *logger;
@property (retain, nonatomic) CNFuture *scoreFuture;

- (id)build;
- (id)initWithHandle:(id)a0 coreRecentsAdapter:(id)a1 contactsAdapter:(id)a2 logger:(id)a3;
- (id)coreRecentsTrustForHandle:(id)a0;
- (id)contactsTrustForEmailAddress:(id)a0;
- (id)contactsTrustForPhoneNumber:(id)a0;
- (void)addCoreRecentsTrust;
- (void)addContactsTrustForEmailAddress;
- (void)addContactsTrustForPhoneNumber;
- (void).cxx_destruct;

@end
