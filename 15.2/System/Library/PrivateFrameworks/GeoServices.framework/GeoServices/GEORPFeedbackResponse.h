@class PBUnknownFields, GEORPFeedbackResult;

@interface GEORPFeedbackResponse : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORPFeedbackResult *_feedbackResult;
    int _feedbackRequestType;
    int _status;
    BOOL _attestationNotFound;
    BOOL _discardLogs;
    struct { unsigned char has_feedbackRequestType : 1; unsigned char has_status : 1; unsigned char has_attestationNotFound : 1; unsigned char has_discardLogs : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasFeedbackRequestType;
@property (nonatomic) int feedbackRequestType;
@property (readonly, nonatomic) BOOL hasFeedbackResult;
@property (retain, nonatomic) GEORPFeedbackResult *feedbackResult;
@property (nonatomic) BOOL hasDiscardLogs;
@property (nonatomic) BOOL discardLogs;
@property (nonatomic) BOOL hasAttestationNotFound;
@property (nonatomic) BOOL attestationNotFound;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)feedbackRequestTypeAsString:(int)a0;
- (int)StringAsFeedbackRequestType:(id)a0;
- (id)dictionaryRepresentation;

@end
