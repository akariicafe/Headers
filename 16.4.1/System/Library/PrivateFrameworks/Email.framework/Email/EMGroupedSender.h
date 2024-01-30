@class NSURL, ECEmailAddress, ECSubject, NSDate, ECMessageFlags, EMGroupedSenderObjectID, NSMutableArray, NSString, EMFollowUp, EFFuture, NSIndexSet, NSArray, EMReadLater, EMObjectID, EMMessage;
@protocol EMCollectionItemID;

@interface EMGroupedSender : EMRepositoryObject <EMMessageListItem, NSSecureCoding, NSCopying> {
    unsigned long long _isEditable;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ECEmailAddress *emailAddress;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) EMMessage *newestMessage;
@property (readonly, copy, nonatomic) EMGroupedSenderObjectID *groupedSenderObjectID;
@property (readonly, copy, nonatomic) NSMutableArray *messages;
@property (readonly) NSDate *date;
@property (readonly) NSDate *displayDate;
@property (readonly) EMReadLater *readLater;
@property (readonly) NSDate *sendLaterDate;
@property (readonly) EMFollowUp *followUp;
@property (readonly) ECSubject *subject;
@property (readonly, copy) NSString *summary;
@property (readonly, copy) NSArray *senderList;
@property (readonly, copy) NSArray *toList;
@property (readonly, copy) NSArray *ccList;
@property (readonly) ECMessageFlags *flags;
@property (readonly) BOOL hasUnflagged;
@property (readonly, copy) NSIndexSet *flagColors;
@property (readonly) BOOL isVIP;
@property (readonly) BOOL isBlocked;
@property (readonly) long long unsubscribeType;
@property (readonly) BOOL isToMe;
@property (readonly) BOOL isCCMe;
@property (readonly) BOOL hasAttachments;
@property (readonly) long long conversationNotificationLevel;
@property (readonly) long long senderBucket;
@property (readonly) BOOL hasUnscreenedSender;
@property (readonly, nonatomic) NSURL *brandIndicatorLocation;
@property (readonly) unsigned long long count;
@property (readonly) long long conversationID;
@property (readonly, copy) NSArray *mailboxObjectIDs;
@property (readonly, copy) NSArray *mailboxes;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly) id<EMCollectionItemID> displayMessageItemID;
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
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void)encodeWithCoder:(id)a0;
- (id)addMessages:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)changeKeyPaths:(id)a0 forMessages:(id)a1;
- (id)initWithObjectID:(id)a0 emailAddress:(id)a1 messages:(id)a2 sortDescriptors:(id)a3;
- (id)initWithSimpleAddress:(id)a0 messages:(id)a1 originatingQuery:(id)a2;
- (id)removeMessages:(id)a0 isGroupEmpty:(BOOL *)a1;

@end
