@interface CKDPShareVettingInitiateResponse : PBCodable <NSCopying> {
    struct { unsigned char vettingError : 1; } _has;
}

@property (nonatomic) BOOL hasVettingError;
@property (nonatomic) int vettingError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsVettingError:(id)a0;
- (id)vettingErrorAsString:(int)a0;

@end
