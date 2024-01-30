@class NSString, EDGmailLabelPersistence, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface EDServerMessagePersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly, nonatomic) long long mailboxID;
@property (readonly, nonatomic) BOOL useNumericSearch;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (readonly, nonatomic) unsigned long long unreadMessageCount;
@property (readonly, nonatomic) unsigned long long undeletedMessageCount;
@property (readonly, nonatomic) unsigned int maximumIMAPUID;
@property (readonly, nonatomic) unsigned int minimumIMAPUID;
@property (readonly, nonatomic) BOOL supportsLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)serverLabelsTableSchema;
+ (id)serverMessagesTableSchema;

- (id)init;
- (void).cxx_destruct;
- (BOOL)applySortedFlags:(id)a0;
- (BOOL)deleteAllServerMessagesInMailbox;
- (void)enumerateUIDsInRanges:(id)a0 withBlock:(id /* block */)a1;
- (id)serverMessagesForIMAPUIDs:(id)a0 limit:(unsigned long long)a1 returnLastEntries:(BOOL)a2;
- (BOOL)_addLabels:(id)a0 removeLabels:(id)a1 forUID:(unsigned int)a2 connection:(id)a3;
- (id)_remoteIDStringForRemoteIDArray:(id)a0;
- (id)_serverMessageForRow:(id)a0 connection:(id)a1;
- (id)_serverMessagesWithWhereClause:(id)a0 limitClause:(id)a1 returnLastEntries:(BOOL)a2;
- (BOOL)addLabels:(id)a0 removeLabels:(id)a1 toMessagesWithRemoteIDs:(id)a2;
- (BOOL)addServerMessage:(id)a0 invalidMessage:(BOOL *)a1 duplicateRemoteID:(BOOL *)a2;
- (BOOL)applyFlagChange:(id)a0 toMessagesWithRemoteIDs:(id)a1;
- (BOOL)attachMessage:(long long)a0 toServerMessageWithRemoteID:(id)a1;
- (id)deleteAllClearedUIDMessages;
- (BOOL)deleteServerMessagesWithRemoteIDs:(id)a0;
- (id)downloadStateForUIDs:(id)a0;
- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1 mailboxID:(long long)a2 useNumericSearch:(BOOL)a3 supportsLabels:(BOOL)a4;
- (id)serverMessagesForMessageIDHeaders:(id)a0;
- (id)serverMessagesForRemoteIDs:(id)a0;
- (void)setDownloadStateForUIDs:(id)a0;

@end
