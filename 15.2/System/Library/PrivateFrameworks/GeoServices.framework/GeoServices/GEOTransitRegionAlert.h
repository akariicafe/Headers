@class PBDataReader, GEOTransitBanner, NSMutableArray, PBUnknownFields;

@interface GEOTransitRegionAlert : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitBanner *_banner;
    NSMutableArray *_triggerRegions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_banner : 1; unsigned char read_triggerRegions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBanner;
@property (retain, nonatomic) GEOTransitBanner *banner;
@property (retain, nonatomic) NSMutableArray *triggerRegions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)triggerRegionType;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addTriggerRegion:(id)a0;
- (unsigned long long)triggerRegionsCount;
- (void)clearTriggerRegions;
- (id)triggerRegionAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
