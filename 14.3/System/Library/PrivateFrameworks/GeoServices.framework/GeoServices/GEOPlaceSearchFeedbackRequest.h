@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct { unsigned char has_sessionGUID : 1; unsigned char has_businessID : 1; unsigned char has_timestamp : 1; unsigned char has_feedbackType : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_numberOfResults : 1; unsigned char has_positionInResults : 1; unsigned char has_sequenceNumber : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasSessionGUID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionGUID;
@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) long long businessID;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasNumberOfResults;
@property (nonatomic) int numberOfResults;
@property (nonatomic) BOOL hasPositionInResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)feedbackTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsFeedbackType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
