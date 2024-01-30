@class NSData;

@interface AWDExpressTransactionType : PBCodable <NSCopying> {
    unsigned int _appletType;
    unsigned int _count;
    NSData *_ridAndPix;
    unsigned int _spid;
    struct { unsigned char appletType : 1; unsigned char count : 1; unsigned char spid : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
