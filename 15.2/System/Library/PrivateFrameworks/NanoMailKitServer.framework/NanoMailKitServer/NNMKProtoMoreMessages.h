@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessages : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mailboxSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *addedMessages;
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)addedMessageType;

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
- (void)addAddedMessage:(id)a0;
- (unsigned long long)addedMessagesCount;
- (void)clearAddedMessages;
- (id)addedMessageAtIndex:(unsigned long long)a0;

@end
