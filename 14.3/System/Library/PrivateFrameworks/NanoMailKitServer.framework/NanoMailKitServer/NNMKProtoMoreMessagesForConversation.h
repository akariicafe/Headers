@class NSData, NSString, NSMutableArray;

@interface NNMKProtoMoreMessagesForConversation : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mailboxSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSMutableArray *addedMessages;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)addedMessageType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAddedMessage:(id)a0;
- (unsigned long long)addedMessagesCount;
- (void)clearAddedMessages;
- (id)addedMessageAtIndex:(unsigned long long)a0;

@end
