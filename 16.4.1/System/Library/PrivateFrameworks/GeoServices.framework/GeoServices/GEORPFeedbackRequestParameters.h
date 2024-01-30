@class GEORPFeedbackQueryParameters, GEORPTdmFraudNotificationParameters, PBDataReader, PBUnknownFields, GEORPFeedbackLogEventParameters, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackSubmissionParameters, GEORPFeedbackIdLookupParameters, GEORPFeedbackImageUploadParameters;

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupParameters *_idLookupParameters;
    GEORPFeedbackImageUploadParameters *_imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters *_layoutConfigParameters;
    GEORPFeedbackLogEventParameters *_logEventParameters;
    GEORPFeedbackQueryParameters *_queryParameters;
    GEORPFeedbackSubmissionParameters *_submissionParameters;
    GEORPTdmFraudNotificationParameters *_tdmFraudNotificationParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_idLookupParameters : 1; unsigned char read_imageUploadParameters : 1; unsigned char read_layoutConfigParameters : 1; unsigned char read_logEventParameters : 1; unsigned char read_queryParameters : 1; unsigned char read_submissionParameters : 1; unsigned char read_tdmFraudNotificationParameters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSubmissionParameters;
@property (retain, nonatomic) GEORPFeedbackSubmissionParameters *submissionParameters;
@property (readonly, nonatomic) BOOL hasIdLookupParameters;
@property (retain, nonatomic) GEORPFeedbackIdLookupParameters *idLookupParameters;
@property (readonly, nonatomic) BOOL hasQueryParameters;
@property (retain, nonatomic) GEORPFeedbackQueryParameters *queryParameters;
@property (readonly, nonatomic) BOOL hasImageUploadParameters;
@property (retain, nonatomic) GEORPFeedbackImageUploadParameters *imageUploadParameters;
@property (readonly, nonatomic) BOOL hasLayoutConfigParameters;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigParameters *layoutConfigParameters;
@property (readonly, nonatomic) BOOL hasTdmFraudNotificationParameters;
@property (retain, nonatomic) GEORPTdmFraudNotificationParameters *tdmFraudNotificationParameters;
@property (readonly, nonatomic) BOOL hasLogEventParameters;
@property (retain, nonatomic) GEORPFeedbackLogEventParameters *logEventParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isPOIEnrichment;
- (id)initForRunningTrackIssue:(int)a0 trackCoordinateLatitude:(double)a1 trackCoordinateLongitude:(double)a2 trackFeatureID:(id)a3 nameOfTrack:(id)a4 numberOfLanes:(id)a5 comment:(id)a6;
- (id)initWithIncidentAnnotationDetails:(id)a0 userPath:(id)a1;
- (id)initWithIncidentLocation:(id)a0 userLocation:(id)a1 type:(int)a2 historicalLocations:(id)a3 userPath:(id)a4;
- (id)initWithMerchantIndustryCode:(long long)a0 mapsIdentifier:(unsigned long long)a1 merchantName:(id)a2 merchantRawName:(id)a3 merchantIndustryCategory:(id)a4 merchantURL:(id)a5 merchantFormattedAddress:(id)a6 transactionTime:(double)a7 transactionType:(id)a8 transactionLocation:(struct { double x0; double x1; })a9;

@end
