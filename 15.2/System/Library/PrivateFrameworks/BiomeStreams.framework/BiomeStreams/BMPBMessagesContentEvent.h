@class NSString, BMPBContentAttachment, NSMutableArray, BMPBNamedHandle;

@interface BMPBMessagesContentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL hasAuthor;
@property (retain, nonatomic) NSString *author;
@property (readonly, nonatomic) BOOL hasSuggestedNickname;
@property (retain, nonatomic) NSString *suggestedNickname;
@property (readonly, nonatomic) BOOL hasSuggestedPhotoPath;
@property (retain, nonatomic) NSString *suggestedPhotoPath;
@property (readonly, nonatomic) BOOL hasRecipients;
@property (retain, nonatomic) NSString *recipients;
@property (readonly, nonatomic) BOOL hasAttachmentURL;
@property (retain, nonatomic) NSString *attachmentURL;
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL hasFromHandle;
@property (retain, nonatomic) BMPBNamedHandle *fromHandle;
@property (retain, nonatomic) NSMutableArray *toHandles;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL hasAccountType;
@property (retain, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSMutableArray *accountHandles;
@property (readonly, nonatomic) BOOL hasAttachment;
@property (retain, nonatomic) BMPBContentAttachment *attachment;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;

+ (Class)toHandlesType;
+ (Class)accountHandlesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addToHandles:(id)a0;
- (void)addAccountHandles:(id)a0;
- (unsigned long long)toHandlesCount;
- (void)clearToHandles;
- (id)toHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)accountHandlesCount;
- (void)clearAccountHandles;
- (id)accountHandlesAtIndex:(unsigned long long)a0;

@end
