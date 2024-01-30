@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mailboxSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *messageStatusUpdates;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)messageStatusUpdateType;

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
- (void)addMessageStatusUpdate:(id)a0;
- (unsigned long long)messageStatusUpdatesCount;
- (void)clearMessageStatusUpdates;
- (id)messageStatusUpdateAtIndex:(unsigned long long)a0;

@end
