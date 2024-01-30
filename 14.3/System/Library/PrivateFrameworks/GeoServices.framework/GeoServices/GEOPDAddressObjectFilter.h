@class NSMutableArray, PBUnknownFields;

@interface GEOPDAddressObjectFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_libraryVersions;
}

@property (retain, nonatomic) NSMutableArray *libraryVersions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)libraryVersionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (id)libraryVersionAtIndex:(unsigned long long)a0;
- (void)clearLibraryVersions;
- (void)addLibraryVersion:(id)a0;
- (unsigned long long)libraryVersionsCount;

@end
