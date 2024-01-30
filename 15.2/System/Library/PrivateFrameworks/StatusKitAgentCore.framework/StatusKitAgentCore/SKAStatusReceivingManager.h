@class NSString, NSObject;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAStatusReceivingManagingDelegate, SKAStatusEncryptionManaging;

@interface SKAStatusReceivingManager : NSObject <SKAStatusReceivingManaging>

@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (weak, nonatomic) id<SKAStatusReceivingManagingDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundCleanupQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithDatabaseManager:(id)a0 encryptionManager:(id)a1 delegate:(id)a2;
- (void)handleIncomingStatusData:(id)a0 onChannelIdentifier:(id)a1 dateReceived:(id)a2 dateExpired:(id)a3 serverTime:(id)a4;

@end
