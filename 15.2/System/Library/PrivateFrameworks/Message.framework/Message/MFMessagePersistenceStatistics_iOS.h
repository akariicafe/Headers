@interface MFMessagePersistenceStatistics_iOS : EDMessagePersistenceStatistics

@property (nonatomic) BOOL protectedDataAvailable;
@property (nonatomic) unsigned long long protectedMessages;
@property (nonatomic) unsigned long long protectedMessageData;
@property (nonatomic) unsigned long long messagesMarkedAsJournaled;
@property (nonatomic) unsigned long long mailboxesNeedingReconcilication;

@end
