@class HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableChange : PBCodable <NSCopying> {
    struct { unsigned char changeIndex : 1; unsigned char changeSize : 1; unsigned char protocolVersion : 1; unsigned char finalForSequence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnchorRangeMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorRangeMap;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) long long protocolVersion;
@property (nonatomic) BOOL hasChangeSize;
@property (nonatomic) long long changeSize;
@property (nonatomic) BOOL hasChangeIndex;
@property (nonatomic) long long changeIndex;
@property (nonatomic) BOOL hasFinalForSequence;
@property (nonatomic) BOOL finalForSequence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
