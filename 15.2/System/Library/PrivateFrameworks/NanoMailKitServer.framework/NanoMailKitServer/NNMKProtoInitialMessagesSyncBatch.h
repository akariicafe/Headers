@class NSMutableArray;

@interface NNMKProtoInitialMessagesSyncBatch : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *initialMessagesSyncs;

+ (Class)initialMessagesSyncType;

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
- (void)addInitialMessagesSync:(id)a0;
- (unsigned long long)initialMessagesSyncsCount;
- (void)clearInitialMessagesSyncs;
- (id)initialMessagesSyncAtIndex:(unsigned long long)a0;

@end
