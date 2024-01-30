@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newFetchController;
- (id)newSearchableIndex;
- (id)newMailboxRepository;
- (id)newAccountRepository;
- (id)newSenderRepository;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newOutgoingMessageRepository;
- (id)sharedInteractionLogger;
- (id)newActivityRegistry;
- (id)newVIPManagerInterface;
- (id)newClientResumerWithClientState:(id)a0;
- (void)test_tearDown;
- (void).cxx_destruct;
- (id)sharedDonationController;

@end
