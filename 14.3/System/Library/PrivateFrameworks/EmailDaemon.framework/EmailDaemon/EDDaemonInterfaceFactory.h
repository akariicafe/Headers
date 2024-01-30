@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (void)test_tearDown;
- (void).cxx_destruct;
- (id)newFetchController;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newAccountRepository;
- (id)newMailboxRepository;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)sharedInteractionLogger;
- (id)sharedDonationController;
- (id)newVIPManagerInterface;
- (id)newActivityRegistry;
- (id)newClientResumerWithClientState:(id)a0;

@end
