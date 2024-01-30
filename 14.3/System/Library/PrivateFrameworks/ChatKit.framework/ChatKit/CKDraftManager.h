@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDraftManager : NSObject {
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}

+ (id)sharedInstance;

- (void)save:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flushCache;
- (id)_draftForKey:(id)a0;
- (void)_setDraft:(id)a0 forKey:(id)a1;
- (void)clearDraftForPendingConversation;
- (void)_clearDraftForConversation:(id)a0;
- (id)_pendingRecipients;
- (void)_setPendingRecipients:(id)a0;
- (id)_pendingRecipientsURL;
- (id)draftForConversation:(id)a0;
- (void)setDraft:(id)a0 forConversation:(id)a1;
- (id)draftForPendingConversationWithRecipients:(id *)a0;
- (void)setDraftForPendingConversation:(id)a0 withRecipients:(id)a1;

@end
