@interface CLPLteCellNeighbor : PBCodable <NSCopying> {
    struct { unsigned char ecn0 : 1; unsigned char pid : 1; unsigned char rscp : 1; unsigned char rssi : 1; unsigned char uarfcn : 1; } _has;
}

@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) int uarfcn;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) int pid;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int rscp;

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
