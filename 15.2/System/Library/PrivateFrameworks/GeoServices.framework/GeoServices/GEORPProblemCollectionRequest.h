@class PBDataReader, NSString, GEORPUserCredentials, NSData, GEOLocation, NSMutableArray, GEORPDebugSettings;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_countryCode;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_countryCode : 1; unsigned char read_debugSettings : 1; unsigned char read_devicePushToken : 1; unsigned char read_hwMachine : 1; unsigned char read_inputLanguage : 1; unsigned char read_osRelease : 1; unsigned char read_requestElements : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char read_userLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *requestElements;
@property (readonly, nonatomic) BOOL hasHwMachine;
@property (retain, nonatomic) NSString *hwMachine;
@property (readonly, nonatomic) BOOL hasOsRelease;
@property (retain, nonatomic) NSString *osRelease;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;

+ (BOOL)isValid:(id)a0;
+ (Class)requestElementType;

- (unsigned long long)requestElementsCount;
- (void)clearRequestElements;
- (unsigned int)requestTypeCode;
- (void)readAll:(BOOL)a0;
- (Class)responseClass;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)addRequestElement:(id)a0;
- (id)requestElementAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
