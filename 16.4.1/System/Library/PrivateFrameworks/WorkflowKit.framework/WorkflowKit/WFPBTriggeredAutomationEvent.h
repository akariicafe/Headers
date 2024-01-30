@class NSString;

@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char batchCount : 1; unsigned char batchDroppedCount : 1; unsigned char requiredRuntimeConfirmation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (nonatomic) BOOL hasRequiredRuntimeConfirmation;
@property (nonatomic) BOOL requiredRuntimeConfirmation;
@property (nonatomic) BOOL hasBatchCount;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) BOOL hasBatchDroppedCount;
@property (nonatomic) unsigned int batchDroppedCount;

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
