@class GEORPClientCapabilities, GEORPDebugSettings, PBDataReader, GEORPFeedbackUserInfo, GEOABSecondPartyPlaceRequestClientMetaData, NSMutableArray, GEOPDClientMetadata, GEOPDAnalyticMetadata, GEORPFeedbackRequestParameters, PBUnknownFields;

@interface GEORPFeedbackRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSMutableArray *_displayLanguages;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    GEORPFeedbackUserInfo *_userInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _feedbackRequestType;
    struct { unsigned char has_feedbackRequestType : 1; unsigned char read_unknownFields : 1; unsigned char read_abClientMetadata : 1; unsigned char read_analyticMetadata : 1; unsigned char read_clientCapabilities : 1; unsigned char read_clientMetadata : 1; unsigned char read_debugSettings : 1; unsigned char read_displayLanguages : 1; unsigned char read_feedbackRequestParameters : 1; unsigned char read_userInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasFeedbackRequestType;
@property (nonatomic) int feedbackRequestType;
@property (readonly, nonatomic) BOOL hasFeedbackRequestParameters;
@property (retain, nonatomic) GEORPFeedbackRequestParameters *feedbackRequestParameters;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) GEORPFeedbackUserInfo *userInfo;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (id)clientTestingDebugSettings;
+ (BOOL)isValid:(id)a0;

- (id)displayLanguageAtIndex:(unsigned long long)a0;
- (id)initWithFeedbackRequestParameters:(id)a0 userCredentials:(id)a1 pushToken:(id)a2 allowContactBackAtEmailAddress:(id)a3 traits:(id)a4;
- (void)clearDisplayLanguages;
- (unsigned int)requestTypeCode;
- (void)readAll:(BOOL)a0;
- (BOOL)isPOIEnrichment;
- (Class)responseClass;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)_sharedInitWithRequestParameters:(id)a0 userInfo:(id)a1 traits:(id)a2 debugSettings:(id)a3;
- (void)_initForSubmissionParameters;
- (void)_setupSubmissionParameters;
- (id)initWithFeedbackRequestParameters:(id)a0 traits:(id)a1;
- (id)initWithFeedbackRequestParameters:(id)a0 userInfo:(id)a1 traits:(id)a2;
- (id)initWithFeedbackRequestParameters:(id)a0 userInfo:(id)a1 traits:(id)a2 debugSettings:(id)a3;
- (unsigned long long)displayLanguagesCount;
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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)feedbackRequestTypeAsString:(int)a0;
- (int)StringAsFeedbackRequestType:(id)a0;
- (void)addDisplayLanguage:(id)a0;
- (id)dictionaryRepresentation;

@end
