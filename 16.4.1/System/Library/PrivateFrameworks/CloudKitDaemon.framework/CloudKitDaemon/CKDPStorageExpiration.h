@interface CKDPStorageExpiration : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char expirationTime : 1; unsigned char operationType : 1; } _has;
}

@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasExpirationTime;
@property (nonatomic) double expirationTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;

@end
