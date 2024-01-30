@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSession;

- (void)_saveSendingRules;
- (id)sendingRulesForIdentifier:(id)a0;
- (id)groupSessionInfoForKey:(id)a0;
- (id)_storingSenderPath;
- (void)_loadSenderSession;
- (id)_storingPath;
- (void)_saveStoredSessions;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (void)_saveReceivingRules;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (id)_senderRulesPath;
- (void)receivingRulesTouched;
- (void).cxx_destruct;
- (void)_loadStoredSessions;
- (id)init;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)sendingRulesTouched;
- (void)removeSession:(id)a0;
- (void)dealloc;
- (id)_rulesPath;
- (void)_saveSenderSession;

@end
