@class NSDate, NSString, NSArray, EFQuery, ECSubject, EMObjectID, ECMessageFlags, NSObject, EMMailboxScope, EMMessageRepository, NSIndexSet, EFFuture;
@protocol OS_os_log, EMMailboxTypeResolver, EMCollectionItemID;

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem> {
    unsigned long long _isEditable;
    EMMailboxScope *_mailboxScope;
    id<EMMailboxTypeResolver> _mailboxTypeResolver;
    NSArray *_mailboxes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxScopeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxTypeResolverLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMMessageRepository *repository;
@property (readonly, nonatomic) EFQuery *originatingQuery;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (retain) id<EMMailboxTypeResolver> mailboxTypeResolver;
@property (retain) NSDate *date;
@property (retain) ECSubject *subject;
@property (copy) NSString *summary;
@property (copy) NSArray *senderList;
@property (copy) NSArray *toList;
@property (copy) NSArray *ccList;
@property BOOL isToMe;
@property BOOL isCCMe;
@property (retain) ECMessageFlags *flags;
@property BOOL hasUnflagged;
@property (copy) NSIndexSet *flagColors;
@property BOOL isVIP;
@property BOOL isBlocked;
@property BOOL hasAttachments;
@property long long conversationNotificationLevel;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id<EMCollectionItemID> displayMessageItemID;
@property long long _internalID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EFFuture *displayMessage;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly) BOOL supportsArchiving;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL isEditable;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ef_publicDescription;
- (id)query;
- (void)setRepository:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemIDForObjectID:(id)a0;
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)a0;
- (BOOL)objectIDBelongsToCollection:(id)a0;
- (id)objectIDForItemID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInitWithOriginatingQuery:(id)a0 builder:(id /* block */)a1;
- (id)initWithObjectID:(id)a0 originatingQuery:(id)a1 builder:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;

@end
