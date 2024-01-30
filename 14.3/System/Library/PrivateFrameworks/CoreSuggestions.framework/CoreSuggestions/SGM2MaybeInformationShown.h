@class NSString;

@interface SGM2MaybeInformationShown : PBCodable <NSCopying> {
    struct { unsigned char extracted : 1; unsigned char extractionModelVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)extractedAsString:(int)a0;
- (int)StringAsExtracted:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
