@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {
    NSData *_possiblyCompressedData;
    BOOL _compressed;
    struct { unsigned char compressed : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
