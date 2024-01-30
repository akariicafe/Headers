@class GEORPClientCapabilities, NSString, PBDataReader, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPUserCredentials, GEOServicesState, NSMutableArray;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOABSecondPartyPlaceRequestClientMetaData *_abAssignmentMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    NSMutableArray *_problemIds;
    GEOServicesState *_servicesState;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_abAssignmentMetadata : 1; unsigned char read_analyticMetadata : 1; unsigned char read_clientCapabilities : 1; unsigned char read_problemIds : 1; unsigned char read_servicesState : 1; unsigned char read_statusNotificationId : 1; unsigned char read_userCredentials : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) BOOL hasStatusNotificationId;
@property (retain, nonatomic) NSString *statusNotificationId;
@property (retain, nonatomic) NSMutableArray *problemIds;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (readonly, nonatomic) BOOL hasAbAssignmentMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property (readonly, nonatomic) BOOL hasServicesState;
@property (retain, nonatomic) GEOServicesState *servicesState;

+ (Class)problemIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (id)init;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addProblemId:(id)a0;
- (unsigned long long)problemIdsCount;
- (void)clearProblemIds;
- (id)problemIdAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)populateAnalyticsMetadata;

@end
