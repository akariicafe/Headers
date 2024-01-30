@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOCategory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_alias;
    long long _geoOntologyId;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _level;
    struct { unsigned char has_geoOntologyId : 1; unsigned char read_unknownFields : 1; unsigned char read_alias : 1; unsigned char read_localizedNames : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *alias;
@property (nonatomic) int level;
@property (nonatomic) BOOL hasGeoOntologyId;
@property (nonatomic) long long geoOntologyId;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedNamesType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addLocalizedNames:(id)a0;
- (id)initWithPlaceDataCategory:(id)a0;
- (unsigned long long)localizedNamesCount;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)clearLocalizedNames;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)localizedNamesAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
