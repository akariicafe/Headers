@class NSString;

@interface ATXMPBBlendingClientModelEngagementClientCacheAgeTracker : PBCodable <NSCopying> {
    struct { unsigned char outcomeType : 1; } _has;
}

@property (nonatomic) BOOL hasOutcomeType;
@property (nonatomic) int outcomeType;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)outcomeTypeAsString:(int)a0;
- (int)StringAsOutcomeType:(id)a0;

@end
