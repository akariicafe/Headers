@class GEORPFeedbackLayoutConfigResult, GEORPFeedbackIdLookupResult, PBUnknownFields, GEORPFeedbackImageUploadResult, PBDataReader, GEORPFeedbackQueryResult, GEORPFeedbackSubmissionResult;

@interface GEORPFeedbackResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupResult *_idLookupResult;
    GEORPFeedbackImageUploadResult *_imageUploadResult;
    GEORPFeedbackLayoutConfigResult *_layoutConfigResult;
    GEORPFeedbackQueryResult *_queryResult;
    GEORPFeedbackSubmissionResult *_submissionResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_idLookupResult : 1; unsigned char read_imageUploadResult : 1; unsigned char read_layoutConfigResult : 1; unsigned char read_queryResult : 1; unsigned char read_submissionResult : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSubmissionResult;
@property (retain, nonatomic) GEORPFeedbackSubmissionResult *submissionResult;
@property (readonly, nonatomic) BOOL hasIdLookupResult;
@property (retain, nonatomic) GEORPFeedbackIdLookupResult *idLookupResult;
@property (readonly, nonatomic) BOOL hasQueryResult;
@property (retain, nonatomic) GEORPFeedbackQueryResult *queryResult;
@property (readonly, nonatomic) BOOL hasImageUploadResult;
@property (retain, nonatomic) GEORPFeedbackImageUploadResult *imageUploadResult;
@property (readonly, nonatomic) BOOL hasLayoutConfigResult;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
