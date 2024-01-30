@class NSString, NSArray, NSDate;

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long visibleStatus;
@property (nonatomic) BOOL replaceStandaloneNotification;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *serverId;
@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *mailboxId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSString *messageIdHeader;
@property (copy, nonatomic) NSString *notificationMessageId;
@property (copy, nonatomic) NSString *publisherBulletinId;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long statusVersion;
@property (nonatomic) BOOL isThreadSpecific;
@property (nonatomic) unsigned long long isSpecialMailboxSpecific;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *preview;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMessageURL:(id)a0;
+ (id)messageIdsFromMessages:(id)a0;
+ (BOOL)checkStatus:(unsigned long long)a0 stateToCheck:(unsigned long long)a1;
+ (unsigned long long)removeState:(unsigned long long)a0 fromStatus:(unsigned long long)a1;
+ (unsigned long long)addState:(unsigned long long)a0 toStatus:(unsigned long long)a1;
+ (BOOL)messageHasMultipleRecipients:(id)a0;
+ (id)URLForMessageId:(id)a0;
+ (id)URLForMessageId:(id)a0 attachmentID:(id)a1;
+ (id)messageIdForURL:(id)a0;
+ (id)attachmentIdForURL:(id)a0;
+ (id)generateMessageHashForMessage:(id)a0;
+ (id)generateNotificationIdWithFolderId:(id)a0 remoteId:(id)a1;
+ (id)generateConversationIdWithAccountId:(id)a0 conversationId:(id)a1;
+ (id)serverIdsFromMessages:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)addState:(unsigned long long)a0;
- (void)removeState:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkState:(unsigned long long)a0;

@end
