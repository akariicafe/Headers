@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORegionalResource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_tileRanges;
    unsigned long long _tileRangesCount;
    unsigned long long _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct { unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_z : 1; unsigned char read_unknownFields : 1; unsigned char read_tileRanges : 1; unsigned char read_attributions : 1; unsigned char read_iconChecksums : 1; unsigned char read_icons : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) unsigned int z;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (readonly, nonatomic) unsigned long long tileRangesCount;
@property (readonly, nonatomic) struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *tileRanges;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)iconType;
+ (Class)attributionType;
+ (Class)iconChecksumType;
+ (BOOL)isValid:(id)a0;

- (id)iconAtIndex:(unsigned long long)a0;
- (void)addIconChecksum:(id)a0;
- (unsigned long long)iconsCount;
- (void)clearIconChecksums;
- (id)initWithJSON:(id)a0;
- (id)iconChecksumAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearIcons;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)attributionsCount;
- (void)dealloc;
- (id)jsonRepresentation;
- (id)attributionAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addAttribution:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearAttributions;
- (id)description;
- (void)clearTileRanges;
- (void)addTileRange:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })tileRangeAtIndex:(unsigned long long)a0;
- (void)setTileRanges:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addIcon:(id)a0;
- (unsigned long long)iconChecksumsCount;

@end
