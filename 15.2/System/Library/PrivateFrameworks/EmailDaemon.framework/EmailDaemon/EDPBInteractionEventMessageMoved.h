@interface EDPBInteractionEventMessageMoved : PBCodable <EDPBDataSetters, NSCopying> {
    struct { unsigned char accountId : 1; unsigned char conversationId : 1; unsigned char fromMailboxId : 1; unsigned char messageId : 1; unsigned char toMailboxId : 1; unsigned char fromMailboxType : 1; unsigned char toMailboxType : 1; } _has;
}

@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasFromMailboxId;
@property (nonatomic) long long fromMailboxId;
@property (nonatomic) BOOL hasFromMailboxType;
@property (nonatomic) int fromMailboxType;
@property (nonatomic) BOOL hasToMailboxId;
@property (nonatomic) long long toMailboxId;
@property (nonatomic) BOOL hasToMailboxType;
@property (nonatomic) int toMailboxType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)withHasher:(id)a0 setMessage:(id)a1 mailbox:(id)a2;
- (id)fromMailboxTypeAsString:(int)a0;
- (int)StringAsFromMailboxType:(id)a0;
- (id)toMailboxTypeAsString:(int)a0;
- (int)StringAsToMailboxType:(id)a0;

@end
