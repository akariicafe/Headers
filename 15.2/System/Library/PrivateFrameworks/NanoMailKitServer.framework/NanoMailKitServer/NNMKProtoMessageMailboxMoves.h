@class NSString, NSMutableArray;

@interface NNMKProtoMessageMailboxMoves : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *messageIds;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;

+ (Class)messageIdsType;

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
- (void)addMessageIds:(id)a0;
- (unsigned long long)messageIdsCount;
- (void)clearMessageIds;
- (id)messageIdsAtIndex:(unsigned long long)a0;

@end
