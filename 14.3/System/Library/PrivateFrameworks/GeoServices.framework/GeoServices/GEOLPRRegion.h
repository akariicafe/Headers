@class PBDataReader, GEOLPRBoundingBoxE7, GEOLPRRegionInfo, NSMutableArray;

@interface GEOLPRRegion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_displayNames;
    GEOLPRRegionInfo *_info;
    GEOLPRBoundingBoxE7 *_regionBoundingBox;
    NSMutableArray *_subRegions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_displayNames : 1; unsigned char read_info : 1; unsigned char read_regionBoundingBox : 1; unsigned char read_subRegions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *displayNames;
@property (retain, nonatomic) NSMutableArray *subRegions;
@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) GEOLPRRegionInfo *info;
@property (readonly, nonatomic) BOOL hasRegionBoundingBox;
@property (retain, nonatomic) GEOLPRBoundingBoxE7 *regionBoundingBox;

+ (Class)displayNameType;
+ (Class)subRegionsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addDisplayName:(id)a0;
- (void)addSubRegions:(id)a0;
- (unsigned long long)displayNamesCount;
- (void)clearDisplayNames;
- (id)displayNameAtIndex:(unsigned long long)a0;
- (unsigned long long)subRegionsCount;
- (void)clearSubRegions;
- (id)subRegionsAtIndex:(unsigned long long)a0;

@end
