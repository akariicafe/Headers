@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {
    struct { unsigned char storageAvailableBytes : 1; } _has;
}

@property (nonatomic) BOOL hasStorageAvailableBytes;
@property (nonatomic) unsigned long long storageAvailableBytes;

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
