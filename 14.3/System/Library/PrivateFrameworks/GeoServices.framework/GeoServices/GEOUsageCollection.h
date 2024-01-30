@class NSString, PBDataReader;

@interface GEOUsageCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOTileUsage { unsigned int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_tileUsages;
    unsigned long long _tileUsagesCount;
    unsigned long long _tileUsagesSpace;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    NSString *_countryCode;
    NSString *_hwMachine;
    long long _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _cellWifi;
    int _geoService;
    int _placeRequestType;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    BOOL _sessionIDIsPersistent;
    struct { unsigned char has_sessionID : 1; unsigned char has_requestErrorCode : 1; unsigned char has_timestamp : 1; unsigned char has_cellWifi : 1; unsigned char has_geoService : 1; unsigned char has_placeRequestType : 1; unsigned char has_requestDataSize : 1; unsigned char has_responseDataSize : 1; unsigned char has_responseTime : 1; unsigned char has_sessionIDIsPersistent : 1; unsigned char read_tileUsages : 1; unsigned char read_countryCode : 1; unsigned char read_hwMachine : 1; unsigned char read_requestErrorDescription : 1; unsigned char read_requestErrorDomain : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasGeoService;
@property (nonatomic) int geoService;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (nonatomic) BOOL hasResponseTime;
@property (nonatomic) int responseTime;
@property (nonatomic) BOOL hasCellWifi;
@property (nonatomic) int cellWifi;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long tileUsagesCount;
@property (readonly, nonatomic) struct GEOTileUsage { unsigned int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *tileUsages;
@property (readonly, nonatomic) BOOL hasHwMachine;
@property (retain, nonatomic) NSString *hwMachine;
@property (nonatomic) BOOL hasSessionIDIsPersistent;
@property (nonatomic) BOOL sessionIDIsPersistent;
@property (nonatomic) BOOL hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (readonly, nonatomic) BOOL hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic) long long requestErrorCode;
@property (readonly, nonatomic) BOOL hasRequestErrorDescription;
@property (retain, nonatomic) NSString *requestErrorDescription;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)placeRequestTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearTileUsages;
- (void)addTileUsage:(struct GEOTileUsage { unsigned int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (int)StringAsPlaceRequestType:(id)a0;
- (struct GEOTileUsage { unsigned int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })tileUsageAtIndex:(unsigned long long)a0;
- (id)geoServiceAsString:(int)a0;
- (int)StringAsGeoService:(id)a0;
- (id)cellWifiAsString:(int)a0;
- (int)StringAsCellWifi:(id)a0;
- (void)setTileUsages:(struct GEOTileUsage { unsigned int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;

@end
