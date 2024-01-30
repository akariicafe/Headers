@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {
    struct { unsigned char compressed : 1; } _has;
}

@property (nonatomic) BOOL hasCompressed;
@property (nonatomic) BOOL compressed;
@property (readonly, nonatomic) BOOL hasPossiblyCompressedData;
@property (retain, nonatomic) NSData *possiblyCompressedData;

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
