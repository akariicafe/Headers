@class NSString, NSMutableArray;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *removedMessageIds;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;

+ (Class)removedMessageIdType;

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
- (void)addRemovedMessageId:(id)a0;
- (unsigned long long)removedMessageIdsCount;
- (void)clearRemovedMessageIds;
- (id)removedMessageIdAtIndex:(unsigned long long)a0;

@end
