@interface GEOLogMessageUsageMetric : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    unsigned long long _messageSize;
    unsigned int _messageCount;
    int _metricState;
    int _metricType;
    unsigned int _retryCount;
    struct { unsigned char has_sessionId : 1; unsigned char has_messageSize : 1; unsigned char has_messageCount : 1; unsigned char has_metricState : 1; unsigned char has_metricType : 1; unsigned char has_retryCount : 1; } _flags;
}

@property (nonatomic) BOOL hasMetricType;
@property (nonatomic) int metricType;
@property (nonatomic) BOOL hasMetricState;
@property (nonatomic) int metricState;
@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)metricTypeAsString:(int)a0;
- (int)StringAsMetricType:(id)a0;
- (id)metricStateAsString:(int)a0;
- (int)StringAsMetricState:(id)a0;

@end
