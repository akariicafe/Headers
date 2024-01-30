@class NSString, EDGmailLabelPersistence, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface EDLocalActionPersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)localMessageActionsTableSchema;
+ (id)actionMessagesTableSchema;
+ (id)actionLabelsTableSchema;
+ (id)actionFlagsTableSchema;

- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1;
- (id)messageForDatabaseID:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)moveSupportedFromMailboxURL:(id)a0 toURL:(id)a1;
- (id)messageActionsForAccountURL:(id)a0 previousActionID:(long long)a1;
- (BOOL)mailboxURLIsInRemoteAccount:(id)a0;
- (id)_transferActionForRow:(id)a0 connection:(id)a1 failedMessages:(id)a2;
- (id)_flagChangeActionForRow:(id)a0 connection:(id)a1;
- (id)_flagChangeAllActionForRow:(id)a0 connection:(id)a1;
- (id)_transferUndownloadedActionForRow:(id)a0 connection:(id)a1;
- (id)_labelChangeActionForRow:(id)a0 connection:(id)a1;
- (void)_findMessagesForAction:(long long)a0 remoteIDs:(id)a1 messages:(id)a2 connection:(id)a3;
- (id)_flagChangeForAction:(long long)a0 connection:(id)a1;
- (BOOL)_addFlagChange:(id)a0 actionID:(long long)a1 connection:(id)a2;
- (BOOL)_addActionMessageForMessage:(id)a0 destinationMessage:(id)a1 actionID:(long long)a2 actionPhase:(long long)a3 connection:(id)a4;
- (BOOL)_addActionMessageForSourceRemoteID:(id)a0 actionID:(long long)a1 connection:(id)a2;
- (BOOL)_setLabelsOnAction:(long long)a0 labels:(id)a1 add:(BOOL)a2 connection:(id)a3;
- (void)_deleteCopyItems:(id)a0 actionID:(long long)a1 connection:(id)a2;
- (void)removeMessageAction:(long long)a0;
- (void)_updateCopyItems:(id)a0 toPhase:(long long)a1 actionID:(long long)a2 connection:(id)a3;
- (id)_whereClauseToFindCopyItems:(id)a0;
- (BOOL)persistFlagChangeAction:(id)a0;
- (BOOL)persistFlagChangeUndownloadedAction:(id)a0;
- (BOOL)persistTransferAction:(id)a0;
- (BOOL)persistTransferUndownloadedAction:(id)a0;
- (BOOL)persistLabelChangeAction:(id)a0;
- (BOOL)updateTransferAction:(id)a0 withResults:(id)a1;
- (id)_sourceRemoteIDListForCopyItems:(id)a0;
- (BOOL)updateTransferUndownloadedMessageAction:(id)a0 withResults:(id)a1;
- (void)updateFlagChangeAction:(id)a0 withRemainingUIDs:(id)a1;

@end
