@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {
    struct { unsigned char reservedSize : 1; unsigned char uploadURLExpirationTimeSeconds : 1; } _has;
}

@property (nonatomic) BOOL hasReservedSize;
@property (nonatomic) long long reservedSize;
@property (readonly, nonatomic) BOOL hasUploadURL;
@property (retain, nonatomic) NSString *uploadURL;
@property (nonatomic) BOOL hasUploadURLExpirationTimeSeconds;
@property (nonatomic) long long uploadURLExpirationTimeSeconds;

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
