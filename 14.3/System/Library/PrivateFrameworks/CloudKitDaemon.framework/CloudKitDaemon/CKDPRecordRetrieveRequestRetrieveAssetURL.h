@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {
    struct { unsigned char requestedTTL : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;
@property (nonatomic) BOOL hasRequestedTTL;
@property (nonatomic) long long requestedTTL;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (int)StringAsType:(id)a0;
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
- (id)typeAsString:(int)a0;

@end
