@class NSString;

@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying> {
    struct { unsigned char clientType : 1; unsigned char triggerType : 1; } _has;
}

@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) int triggerType;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) int clientType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (id)triggerTypeAsString:(int)a0;
- (int)StringAsTriggerType:(id)a0;
- (id)clientTypeAsString:(int)a0;
- (int)StringAsClientType:(id)a0;

@end
