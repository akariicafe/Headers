@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {
    struct { unsigned char evaluationOrder : 1; unsigned char limitKind : 1; unsigned char limitOrder : 1; unsigned char limitValue : 1; unsigned char dynamic : 1; unsigned char enabledItemsOnly : 1; unsigned char filtered : 1; unsigned char genius : 1; unsigned char limited : 1; unsigned char reverseLimitOrder : 1; } _has;
}

@property (nonatomic) BOOL hasDynamic;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL hasFiltered;
@property (nonatomic) BOOL filtered;
@property (nonatomic) BOOL hasLimited;
@property (nonatomic) BOOL limited;
@property (nonatomic) BOOL hasLimitKind;
@property (nonatomic) int limitKind;
@property (nonatomic) BOOL hasEvaluationOrder;
@property (nonatomic) unsigned int evaluationOrder;
@property (nonatomic) BOOL hasLimitOrder;
@property (nonatomic) unsigned int limitOrder;
@property (nonatomic) BOOL hasLimitValue;
@property (nonatomic) unsigned int limitValue;
@property (nonatomic) BOOL hasEnabledItemsOnly;
@property (nonatomic) BOOL enabledItemsOnly;
@property (nonatomic) BOOL hasReverseLimitOrder;
@property (nonatomic) BOOL reverseLimitOrder;
@property (readonly, nonatomic) BOOL hasSmartCriteria;
@property (retain, nonatomic) NSData *smartCriteria;
@property (nonatomic) BOOL hasGenius;
@property (nonatomic) BOOL genius;

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
