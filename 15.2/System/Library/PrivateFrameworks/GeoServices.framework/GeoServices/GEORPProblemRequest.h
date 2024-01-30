@class GEORPClientCapabilities, NSString, NSData, GEORPProblem, GEORPDebugSettings, PBDataReader, GEOPDClientMetadata, GEOPDAnalyticMetadata, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_inputLanguage;
    NSString *_problemUuid;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_analyticMetadata : 1; unsigned char read_clientCapabilities : 1; unsigned char read_clientMetadata : 1; unsigned char read_debugSettings : 1; unsigned char read_devicePushToken : 1; unsigned char read_inputLanguage : 1; unsigned char read_problemUuid : 1; unsigned char read_problem : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasProblem;
@property (retain, nonatomic) GEORPProblem *problem;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) BOOL hasProblemUuid;
@property (retain, nonatomic) NSString *problemUuid;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;

+ (BOOL)isValid:(id)a0;

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
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
