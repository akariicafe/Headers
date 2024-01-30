@class NSArray, NSData;

@interface HALSchemaHALCrossDeviceCommandExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char action : 1; unsigned char actionResult : 1; unsigned char homeKitTarget : 1; } _has;
}

@property (copy, nonatomic) NSArray *selecteds;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int actionResult;
@property (nonatomic) BOOL hasActionResult;
@property (nonatomic) int homeKitTarget;
@property (nonatomic) BOOL hasHomeKitTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteAction;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)selectedCount;
- (void).cxx_destruct;
- (void)addSelected:(id)a0;
- (id)selectedAtIndex:(unsigned long long)a0;
- (void)clearSelected;
- (void)deleteActionResult;
- (void)deleteHomeKitTarget;
- (void)deleteSelected;

@end
