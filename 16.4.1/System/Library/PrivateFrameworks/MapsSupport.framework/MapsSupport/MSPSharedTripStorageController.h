@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSessionStorage;

+ (id)_receivedNotificationRulesPath;
+ (id)_receivedSessionsPath;
+ (id)_senderSessionStoragePath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (void)receivingRulesTouched;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)removeSession:(id)a0;
- (void)_loadSenderSession;
- (void)_saveSendingRules;
- (void)_saveReceivingRules;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (id)groupSessionInfoForKey:(id)a0;
- (void)_saveStoredSessions;
- (void)dealloc;
- (void)_loadStoredSessions;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (id)init;
- (void)sendingRulesTouched;
- (void)_saveSenderSession;
- (id)sendingRulesForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
