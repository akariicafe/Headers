@class NSURL, ECSubject, NSDate, NSObject, ECMessageFlags, EMThreadObjectID, EMMailboxScope, NSString, EMFollowUp, EFFuture, NSIndexSet, EFQuery, NSArray, EMReadLater, EMObjectID, EMMessageRepository;
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
@property (readonly, copy, nonatomic) EMThreadObjectID *objectID;
@property (retain) id<EMMailboxTypeResolver> mailboxTypeResolver;
@property (retain) NSDate *date;
@property (retain) NSDate *displayDate;
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
@property long long unsubscribeType;
@property BOOL hasAttachments;
@property long long conversationNotificationLevel;
@property long long senderBucket;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (retain) EMFollowUp *followUp;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id<EMCollectionItemID> displayMessageItemID;
@property long long _internalID;
@property (readonly) BOOL hasUnscreenedSender;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EFFuture *displayMessage;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly) BOOL supportsArchiving;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL isEditable;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void)encodeWithCoder:(id)a0;
- (id)query;
- (id)initWithCoder:(id)a0;
- (void)setRepository:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_commonInitWithOriginatingQuery:(id)a0 builder:(id /* block */)a1;
- (id)initWithObjectID:(id)a0 originatingQuery:(id)a1 builder:(id /* block */)a2;
- (id)itemIDForObjectID:(id)a0;
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)a0;
- (BOOL)objectIDBelongsToCollection:(id)a0;
- (id)objectIDForItemID:(id)a0;

@end
