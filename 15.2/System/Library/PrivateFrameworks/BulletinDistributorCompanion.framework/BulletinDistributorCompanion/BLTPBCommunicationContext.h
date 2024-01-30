@class NSString, NSURL, NSData, NSMutableArray, BLTPBContact;

@interface BLTPBCommunicationContext : PBCodable <NSCopying> {
    struct { unsigned char recipientCount : 1; unsigned char mentionsCurrentUser : 1; unsigned char notifyRecipientAnyway : 1; unsigned char replyToCurrentUser : 1; unsigned char systemImage : 1; } _has;
}

@property (readonly) NSURL *contentURLLocalFileLocation;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasAssociatedObjectUriData;
@property (retain, nonatomic) NSString *associatedObjectUriData;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSender;
@property (retain, nonatomic) BLTPBContact *sender;
@property (retain, nonatomic) NSMutableArray *recipients;
@property (readonly, nonatomic) BOOL hasContentURLData;
@property (retain, nonatomic) NSData *contentURLData;
@property (nonatomic) BOOL hasMentionsCurrentUser;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic) BOOL hasNotifyRecipientAnyway;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) BOOL hasReplyToCurrentUser;
@property (nonatomic) BOOL replyToCurrentUser;
@property (nonatomic) BOOL hasRecipientCount;
@property (nonatomic) int recipientCount;
@property (readonly, nonatomic) BOOL hasImageName;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) BOOL hasSystemImage;
@property (nonatomic) BOOL systemImage;

+ (Class)recipientsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addRecipients:(id)a0;
- (id)recipientsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)recipientsCount;
- (unsigned long long)hash;
- (void)clearRecipients;
- (id)dictionaryRepresentation;

@end
