@class SISchemaClientTurnContext, SISchemaClientAnyEvent;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SISchemaClientTurnContext *turnContext;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) SISchemaClientAnyEvent *event;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)si_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
