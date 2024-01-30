@class NSString, NSData;

@interface ATXPBRequestForInteractionSuggestions : PBCodable <NSCopying> {
    struct { unsigned char timeout : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL hasOriginatorId;
@property (retain, nonatomic) NSString *originatorId;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (retain, nonatomic) NSString *consumerSubTypeString;
@property (readonly, nonatomic) BOOL hasPsPredictionContext;
@property (retain, nonatomic) NSData *psPredictionContext;
@property (nonatomic) BOOL hasTimeout;
@property (nonatomic) double timeout;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
