@class EDSenderPersistence;
@protocol EFScheduler;

@interface EDSenderRepository : NSObject

@property (readonly, nonatomic) EDSenderPersistence *senderPersistence;
@property (readonly, nonatomic) id<EFScheduler> persistenceScheduler;

- (void).cxx_destruct;
- (void)simpleAddressesForRelevantSendersForSearchWithCompletionHandler:(id /* block */)a0;
- (id)initWithSenderPersistence:(id)a0;

@end
