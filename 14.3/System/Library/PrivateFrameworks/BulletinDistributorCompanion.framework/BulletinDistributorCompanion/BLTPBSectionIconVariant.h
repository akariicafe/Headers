@class NSData;

@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {
    struct { unsigned char precomposed : 1; } _has;
}

@property (nonatomic) unsigned int format;
@property (readonly, nonatomic) BOOL hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL hasPrecomposed;
@property (nonatomic) BOOL precomposed;

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
