@class NSString, NSData;

@interface ATXPBRequestForContextualActionSuggestions : PBCodable <NSCopying> {
    struct { unsigned char timeout : 1; unsigned char maxSuggestions : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL hasOriginatorId;
@property (retain, nonatomic) NSString *originatorId;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (retain, nonatomic) NSString *consumerSubTypeString;
@property (readonly, nonatomic) BOOL hasCaxPredictionContext;
@property (retain, nonatomic) NSData *caxPredictionContext;
@property (nonatomic) BOOL hasMaxSuggestions;
@property (nonatomic) int maxSuggestions;
@property (nonatomic) BOOL hasTimeout;
@property (nonatomic) double timeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
