@class NSMutableArray, PBUnknownFields;

@interface GEOServiceVersion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_versionDomains;
    unsigned int _minimumVersion;
    struct { unsigned char has_minimumVersion : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *versionDomains;
@property (nonatomic) BOOL hasMinimumVersion;
@property (nonatomic) unsigned int minimumVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)versionDomainType;
+ (BOOL)isValid:(id)a0;

- (id)versionDomainAtIndex:(unsigned long long)a0;
- (unsigned long long)versionDomainsCount;
- (id)initWithJSON:(id)a0;
- (void)clearVersionDomains;
- (void)addVersionDomain:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
