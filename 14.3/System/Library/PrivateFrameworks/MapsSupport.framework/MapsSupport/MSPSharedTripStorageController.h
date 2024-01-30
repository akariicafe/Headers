@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSession;

- (void)_saveReceivingRules;
- (id)init;
- (void)sendingRulesTouched;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (id)_storingSenderPath;
- (void)dealloc;
- (void)_loadSenderSession;
- (id)receivingRulesForIdentifier:(id)a0;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)_saveStoredSessions;
- (void)_saveSenderSession;
- (id)_rulesPath;
- (void)receivingRulesTouched;
- (void)_loadStoredSessions;
- (id)_senderRulesPath;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)_saveSendingRules;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (id)groupSessionInfoForKey:(id)a0;
- (id)_storingPath;

@end
