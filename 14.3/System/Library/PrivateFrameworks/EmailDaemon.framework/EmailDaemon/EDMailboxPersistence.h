@class NSSet, NSMutableDictionary, NSString;
@protocol EDMailboxProvider;

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeObserversByIdentifierLock;
}

@property (retain, nonatomic) NSMutableDictionary *changeObserversByIdentifier;
@property (retain, nonatomic) id<EDMailboxProvider> mailboxProvider;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (BOOL)moveMailbox:(id)a0 newParentMailboxID:(id)a1;
- (id)initWithMailboxProvider:(id)a0;
- (void)mailboxListInvalidated;
- (void)serverCountsForMailboxScope:(id)a0 block:(id /* block */)a1;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)a0 createIfNecessary:(BOOL)a1;
- (id)allMailboxes;
- (id)legacyMailboxForObjectID:(id)a0;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1;
- (BOOL)deleteMailbox:(id)a0;
- (BOOL)createMailbox:(id)a0 parentMailboxID:(id)a1;
- (id)legacyMailboxForMailboxURL:(id)a0;
- (void)allMailboxesWithCompletionHandler:(id /* block */)a0;
- (id)userCreatedMailboxObjectIDs;
- (void)fetchMailboxLists;
- (void)addChangeObserver:(id)a0 withIdentifier:(id)a1;
- (void)removeChangeObserverWithIdentifier:(id)a0;

@end
