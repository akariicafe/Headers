@class NSString, PBDataReader;

@interface GEOVectorTileRequest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_accessKey;
    NSString *_countryCode;
    NSString *_languageCode;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _latitudeHint;
    float _longitudeHint;
    unsigned int _scale;
    unsigned int _size;
    unsigned int _style;
    unsigned int _version;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    BOOL _preflight;
    BOOL _venuesPreflight;
    BOOL _vloc;
    struct { unsigned char has_lineId : 1; unsigned char has_latitudeHint : 1; unsigned char has_longitudeHint : 1; unsigned char has_scale : 1; unsigned char has_size : 1; unsigned char has_style : 1; unsigned char has_version : 1; unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_z : 1; unsigned char has_preflight : 1; unsigned char has_venuesPreflight : 1; unsigned char has_vloc : 1; unsigned char read_accessKey : 1; unsigned char read_countryCode : 1; unsigned char read_languageCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) unsigned int z;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) unsigned int style;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL hasPreflight;
@property (nonatomic) BOOL preflight;
@property (nonatomic) BOOL hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned int size;
@property (nonatomic) BOOL hasScale;
@property (nonatomic) unsigned int scale;
@property (readonly, nonatomic) BOOL hasAccessKey;
@property (retain, nonatomic) NSString *accessKey;
@property (nonatomic) BOOL hasLongitudeHint;
@property (nonatomic) float longitudeHint;
@property (nonatomic) BOOL hasLatitudeHint;
@property (nonatomic) float latitudeHint;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasVenuesPreflight;
@property (nonatomic) BOOL venuesPreflight;
@property (nonatomic) BOOL hasVloc;
@property (nonatomic) BOOL vloc;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
