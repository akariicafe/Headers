@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying> {
    struct { unsigned char receivedSnapshotRequest : 1; unsigned char sentSnapshotRequest : 1; unsigned char sentSnapshotResponse : 1; } _has;
}

@property (nonatomic) BOOL hasReceivedSnapshotRequest;
@property (nonatomic) unsigned int receivedSnapshotRequest;
@property (nonatomic) BOOL hasSentSnapshotRequest;
@property (nonatomic) unsigned int sentSnapshotRequest;
@property (nonatomic) BOOL hasSentSnapshotResponse;
@property (nonatomic) unsigned int sentSnapshotResponse;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
