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

@end
