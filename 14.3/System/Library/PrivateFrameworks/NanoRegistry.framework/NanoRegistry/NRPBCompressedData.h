@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {
    struct { unsigned char compressed : 1; } _has;
}

@property (nonatomic) BOOL hasCompressed;
@property (nonatomic) BOOL compressed;
@property (readonly, nonatomic) BOOL hasPossiblyCompressedData;
@property (retain, nonatomic) NSData *possiblyCompressedData;

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
