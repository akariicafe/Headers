@class NSString, NSArray, NSData;

@interface SCSchemaSCCheckCorrectionResult : SISchemaInstrumentationMessage {
    struct { unsigned char correctionType : 1; } _has;
}

@property (copy, nonatomic) NSString *correctedAttribute;
@property (nonatomic) BOOL hasCorrectedAttribute;
@property (nonatomic) int correctionType;
@property (nonatomic) BOOL hasCorrectionType;
@property (copy, nonatomic) NSArray *referredEntities;
@property (copy, nonatomic) NSArray *incomingEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addIncomingEntities:(id)a0;
- (void)addReferredEntities:(id)a0;
- (void)clearIncomingEntities;
- (void)clearReferredEntities;
- (void)deleteCorrectedAttribute;
- (void)deleteCorrectionType;
- (void)deleteIncomingEntities;
- (void)deleteReferredEntities;
- (id)incomingEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)incomingEntitiesCount;
- (id)referredEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)referredEntitiesCount;

@end
