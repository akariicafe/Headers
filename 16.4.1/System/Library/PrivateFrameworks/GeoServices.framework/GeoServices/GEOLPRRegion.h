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

+ (BOOL)isValid:(id)a0;
+ (Class)displayNameType;
+ (Class)subRegionsType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearSubRegions;
- (void)addDisplayName:(id)a0;
- (unsigned long long)subRegionsCount;
- (void)addSubRegions:(id)a0;
- (void)clearDisplayNames;
- (id)displayNameAtIndex:(unsigned long long)a0;
- (unsigned long long)displayNamesCount;
- (id)subRegionsAtIndex:(unsigned long long)a0;

@end
