@class EDTransactionService, NSString, EDConversationRemoteCloudKitStorage, NSObject;
@protocol OS_os_log, EDConversationRemoteStorageDelegate, OS_dispatch_queue, EDConversationRemoteStorage;

@interface EDConversationMultipleRemoteStorage : NSObject <EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) id<EDConversationRemoteStorageDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) id<EDConversationRemoteStorage> kvsStorage;
@property (retain, nonatomic) EDConversationRemoteCloudKitStorage *cloudKitStorage;
@property (retain, nonatomic) EDTransactionService *dataReplicationTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)conversationRemoteStorageDidInitialize:(id)a0;
- (void)removeDictionaryForKey:(id)a0;
- (void)conversationRemoteStorage:(id)a0 didChangeEntries:(id)a1 reason:(long long)a2;
- (void)_replicateAllContentFromStore:(id)a0 toStore:(id)a1 synchronize:(BOOL)a2;
- (id)storageName;
- (void).cxx_destruct;
- (void)_handleStorageReady:(id)a0;
- (void)refresh;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (void)conversationRemoteStorageWillResetData:(id)a0;
- (BOOL)isInitialized;
- (id)dictionaryRepresentation;
- (void)conversationRemoteStorageDidResetData:(id)a0;
- (void)_saveChanges:(id)a0 fromStorage:(id)a1 toStorage:(id)a2 synchronize:(BOOL)a3;

@end
