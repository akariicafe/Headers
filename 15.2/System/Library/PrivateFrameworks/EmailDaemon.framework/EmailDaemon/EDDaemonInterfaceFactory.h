@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newSearchableIndex;
- (id)newAccountRepository;
- (void)test_tearDown;
- (id)newFetchController;
- (id)newMailboxRepository;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newActivityRegistry;
- (void).cxx_destruct;
- (id)newClientResumerWithClientState:(id)a0;
- (id)sharedDonationController;
- (id)newVIPManagerInterface;
- (id)sharedInteractionLogger;
- (id)newOutgoingMessageRepository;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newMessageRepositoryWithResumable:(id)a0;

@end
