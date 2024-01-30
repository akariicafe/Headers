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
- (id)outcomeTypeAsString:(int)a0;
- (int)StringAsOutcomeType:(id)a0;

@end
