@class NSString;

@interface TRITrialRolloutFields : PBCodable <NSCopying> {
    struct { unsigned char clientTargetingRuleGroupOrdinal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientRolloutId;
@property (retain, nonatomic) NSString *clientRolloutId;
@property (readonly, nonatomic) BOOL hasClientFactorPackSetId;
@property (retain, nonatomic) NSString *clientFactorPackSetId;
@property (readonly, nonatomic) BOOL hasClientRampId;
@property (retain, nonatomic) NSString *clientRampId;
@property (nonatomic) BOOL hasClientTargetingRuleGroupOrdinal;
@property (nonatomic) int clientTargetingRuleGroupOrdinal;

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
