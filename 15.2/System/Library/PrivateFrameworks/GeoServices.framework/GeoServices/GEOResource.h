@class PBDataReader, NSString, NSData, NSMutableArray, PBUnknownFields;

@interface GEOResource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSData *_checksum;
    NSString *_filename;
    NSMutableArray *_filters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _alternateResourceURLIndex;
    int _connectionType;
    unsigned int _preferWiFiAllowedStaleThreshold;
    int _resourceType;
    unsigned int _timeToLiveSeconds;
    int _updateMethod;
    int _validationMethod;
    struct { unsigned char has_alternateResourceURLIndex : 1; unsigned char has_connectionType : 1; unsigned char has_preferWiFiAllowedStaleThreshold : 1; unsigned char has_resourceType : 1; unsigned char has_timeToLiveSeconds : 1; unsigned char has_updateMethod : 1; unsigned char has_validationMethod : 1; unsigned char read_unknownFields : 1; unsigned char read_regions : 1; unsigned char read_checksum : 1; unsigned char read_filename : 1; unsigned char read_filters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasResourceType;
@property (nonatomic) int resourceType;
@property (readonly, nonatomic) BOOL hasFilename;
@property (retain, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL hasChecksum;
@property (retain, nonatomic) NSData *checksum;
@property (readonly, nonatomic) unsigned long long regionsCount;
@property (readonly, nonatomic) struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *regions;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold;
@property (nonatomic) unsigned int preferWiFiAllowedStaleThreshold;
@property (nonatomic) BOOL hasValidationMethod;
@property (nonatomic) int validationMethod;
@property (nonatomic) BOOL hasAlternateResourceURLIndex;
@property (nonatomic) unsigned int alternateResourceURLIndex;
@property (nonatomic) BOOL hasUpdateMethod;
@property (nonatomic) int updateMethod;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)filterType;
+ (BOOL)isValid:(id)a0;

- (void)setRegions:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)filtersCount;
- (void)readAll:(BOOL)a0;
- (id)updateMethodAsString:(int)a0;
- (int)StringAsValidationMethod:(id)a0;
- (int)StringAsConnectionType:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearRegions;
- (id)connectionTypeAsString:(int)a0;
- (void)addFilter:(id)a0;
- (void)addRegion:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_geo_isRelevantForScales:(id)a0 scenarios:(id)a1;
- (id)initWithJSON:(id)a0;
- (id)validationMethodAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsUpdateMethod:(id)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })regionAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)filterAtIndex:(unsigned long long)a0;
- (void)clearFilters;
- (int)StringAsResourceType:(id)a0;
- (id)dictionaryRepresentation;
- (id)resourceTypeAsString:(int)a0;

@end
