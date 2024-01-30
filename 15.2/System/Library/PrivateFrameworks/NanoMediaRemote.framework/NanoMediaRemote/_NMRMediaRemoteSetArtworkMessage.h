@class NSData;

@interface _NMRMediaRemoteSetArtworkMessage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char originIdentifier : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasJpegData;
@property (retain, nonatomic) NSData *jpegData;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasOriginalDigest;
@property (retain, nonatomic) NSData *originalDigest;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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

@end
