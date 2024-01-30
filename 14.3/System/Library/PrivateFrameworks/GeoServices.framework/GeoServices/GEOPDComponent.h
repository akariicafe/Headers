@class PBUnknownFields, GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    GEOPDSource *_source;
    double _timestampFirstSeen;
    NSMutableArray *_values;
    NSMutableArray *_versionDomains;
    int _cacheControl;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    int _valuesAvailable;
    unsigned int _version;
    struct { unsigned char has_timestampFirstSeen : 1; unsigned char has_cacheControl : 1; unsigned char has_startIndex : 1; unsigned char has_status : 1; unsigned char has_ttl : 1; unsigned char has_type : 1; unsigned char has_valuesAvailable : 1; unsigned char has_version : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestampFirstSeen;
@property (nonatomic) double timestampFirstSeen;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) int startIndex;
@property (nonatomic) BOOL hasValuesAvailable;
@property (nonatomic) int valuesAvailable;
@property (readonly, nonatomic) BOOL hasAttribution;
@property (retain, nonatomic) GEOPDAttribution *attribution;
@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *versionDomains;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) GEOPDSource *source;
@property (nonatomic) BOOL hasCacheControl;
@property (nonatomic) int cacheControl;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)valueType;
+ (Class)versionDomainType;
+ (BOOL)isValid:(id)a0;

- (id)versionDomainAtIndex:(unsigned long long)a0;
- (void)clearValues;
- (void)addValue:(id)a0;
- (unsigned long long)versionDomainsCount;
- (BOOL)statusCodeIsValid;
- (id)initWithJSON:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)clearVersionDomains;
- (void)addVersionDomain:(id)a0;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)cacheControlAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)valuesCount;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsCacheControl:(id)a0;
- (id)typeAsString:(int)a0;

@end
