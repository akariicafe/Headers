@class EMMessage, EFQuery, NSArray, EMThread, NSMutableArray, EMThreadScope;
@protocol EMMailboxTypeResolver;

@interface EDInMemoryThread : NSObject <NSCopying> {
    NSMutableArray *_messages;
    NSMutableArray *_dateSortedMessages;
}

@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (retain, nonatomic) EMThread *thread;
@property (readonly, nonatomic) EFQuery *originatingQuery;
@property (readonly, nonatomic) id<EMMailboxTypeResolver> mailboxTypeResolver;
@property (readonly, nonatomic) EMMessage *newestMessage;
@property (retain, nonatomic) EMMessage *displayMessage;
@property (readonly, copy, nonatomic) NSArray *messages;

+ (id)_dateSortDescriptors;

- (id)addMessages:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isSortedByDate:(id)a0;
- (void)_recalculateDisplayMessage;
- (id)_createThreadWithObjectID:(id)a0;
- (id)_combinedSenderList;
- (id)_combinedToList;
- (id)_combinedCCList;
- (id)_combinedFlags;
- (BOOL)_combinedHasUnflagged;
- (id)_combinedFlagColors;
- (BOOL)_combinedIsVIP;
- (BOOL)_combinedIsBlocked;
- (BOOL)_combinedHasAttachments;
- (id)_combinedMailboxes;
- (id)initWithMessages:(id)a0 originatingQuery:(id)a1 mailboxTypeResolver:(id)a2;
- (void)_addMessagesToThread:(id)a0;
- (id)_calculateAndApplyChange;
- (id)_calculateChangesAfterRemovingMessages:(id)a0 applyingChanges:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)removeMessages:(id)a0 threadIsEmpty:(BOOL *)a1;
- (id)_dateSortedMessages;
- (id)changeMessages:(id)a0 forKeyPaths:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)updateMessage:(id)a0 fromOldObjectID:(id)a1;

@end
