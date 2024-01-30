@class NSString, NSMutableArray, NSData;

@interface NNMKProtoMessage : PBCodable <NSCopying> {
    struct { unsigned char isSpecialMailboxSpecific : 1; unsigned char status : 1; unsigned char statusVersion : 1; unsigned char isThreadSpecific : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) NSString *subject;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (readonly, nonatomic) BOOL hasFrom;
@property (retain, nonatomic) NSString *from;
@property (retain, nonatomic) NSMutableArray *tos;
@property (retain, nonatomic) NSMutableArray *ccs;
@property (readonly, nonatomic) BOOL hasDateSent;
@property (retain, nonatomic) NSData *dateSent;
@property (readonly, nonatomic) BOOL hasDateReceived;
@property (retain, nonatomic) NSData *dateReceived;
@property (readonly, nonatomic) BOOL hasMessageIdHeader;
@property (retain, nonatomic) NSString *messageIdHeader;
@property (retain, nonatomic) NSMutableArray *bccs;
@property (readonly, nonatomic) BOOL hasRemoteId;
@property (retain, nonatomic) NSString *remoteId;
@property (readonly, nonatomic) BOOL hasNotificationMessageId;
@property (retain, nonatomic) NSString *notificationMessageId;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasIsThreadSpecific;
@property (nonatomic) BOOL isThreadSpecific;
@property (nonatomic) BOOL hasIsSpecialMailboxSpecific;
@property (nonatomic) unsigned int isSpecialMailboxSpecific;
@property (readonly, nonatomic) BOOL hasPublisherBulletinId;
@property (retain, nonatomic) NSString *publisherBulletinId;
@property (nonatomic) BOOL hasStatusVersion;
@property (nonatomic) unsigned int statusVersion;

+ (Class)toType;
+ (Class)ccType;
+ (Class)bccType;
+ (id)protoMessageFromMessage:(id)a0 organizedByThread:(BOOL)a1 sanitizeMessageId:(BOOL)a2 supportsStandaloneMode:(BOOL)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addTo:(id)a0;
- (void)addCc:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBcc:(id)a0;
- (unsigned long long)tosCount;
- (void)clearTos;
- (id)toAtIndex:(unsigned long long)a0;
- (unsigned long long)ccsCount;
- (void)clearCcs;
- (id)ccAtIndex:(unsigned long long)a0;
- (unsigned long long)bccsCount;
- (void)clearBccs;
- (id)bccAtIndex:(unsigned long long)a0;

@end
