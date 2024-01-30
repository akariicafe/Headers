@class NSData;

@interface NPKProtoSignDataResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL hasSignedData;
@property (retain, nonatomic) NSData *signedData;
@property (readonly, nonatomic) BOOL hasCertsBytes;
@property (retain, nonatomic) NSData *certsBytes;
@property (readonly, nonatomic) BOOL hasSignatureInfoBytes;
@property (retain, nonatomic) NSData *signatureInfoBytes;

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
