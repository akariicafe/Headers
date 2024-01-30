@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORegionalResourceRegion : PBCodable <NSCopying> {
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
    struct { unsigned char read_unknownFields : 1; unsigned char read_tileRanges : 1; unsigned char read_attributions : 1; unsigned char read_iconChecksums : 1; unsigned char read_icons : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long tileRangesCount;
@property (readonly, nonatomic) struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *tileRanges;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)iconType;
+ (BOOL)isValid:(id)a0;
+ (Class)attributionType;
+ (Class)iconChecksumType;

- (void)clearIcons;
- (unsigned long long)attributionsCount;
- (void)addIconChecksum:(id)a0;
- (void)clearIconChecksums;
- (void)clearAttributions;
- (void)addAttribution:(id)a0;
- (void)addIcon:(id)a0;
- (unsigned long long)iconChecksumsCount;
- (id)attributionAtIndex:(unsigned long long)a0;
- (unsigned long long)iconsCount;
- (id)iconChecksumAtIndex:(unsigned long long)a0;
- (id)iconAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearTileRanges;
- (void)addTileRange:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })tileRangeAtIndex:(unsigned long long)a0;
- (void)setTileRanges:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 count:(unsigned long long)a1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
