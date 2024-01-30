@interface SIRINLUEXTERNALSemVer : PBCodable <NSCopying> {
    struct { unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; } _has;
}

@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) unsigned int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) unsigned int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) unsigned int patchVersion;

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
