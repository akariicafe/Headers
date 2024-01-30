@class GEORPFeedbackQueryParameters, PBUnknownFields, GEORPFeedbackSubmissionParameters, PBDataReader, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackImageUploadParameters, GEORPFeedbackIdLookupParameters;

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupParameters *_idLookupParameters;
    GEORPFeedbackImageUploadParameters *_imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters *_layoutConfigParameters;
    GEORPFeedbackQueryParameters *_queryParameters;
    GEORPFeedbackSubmissionParameters *_submissionParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_idLookupParameters : 1; unsigned char read_imageUploadParameters : 1; unsigned char read_layoutConfigParameters : 1; unsigned char read_queryParameters : 1; unsigned char read_submissionParameters : 1; unsigned char wrote_anyField : 1; } _flags;
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
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)initWithMerchantIndustryCode:(long long)a0 mapsIdentifier:(unsigned long long)a1 merchantName:(id)a2 merchantRawName:(id)a3 merchantIndustryCategory:(id)a4 merchantURL:(id)a5 merchantFormattedAddress:(id)a6 transactionTime:(double)a7 transactionType:(id)a8 transactionLocation:(struct { double x0; double x1; })a9;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isPOIEnrichment;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIncidentLocation:(id)a0 type:(int)a1 historicalLocations:(id)a2;

@end
