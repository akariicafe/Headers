@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying> {
    struct { unsigned char downloadURLExpirationTimeSeconds : 1; unsigned char size : 1; } _has;
}

@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;
@property (readonly, nonatomic) BOOL hasDownloadURL;
@property (retain, nonatomic) NSString *downloadURL;
@property (nonatomic) BOOL hasDownloadURLExpirationTimeSeconds;
@property (nonatomic) long long downloadURLExpirationTimeSeconds;

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
