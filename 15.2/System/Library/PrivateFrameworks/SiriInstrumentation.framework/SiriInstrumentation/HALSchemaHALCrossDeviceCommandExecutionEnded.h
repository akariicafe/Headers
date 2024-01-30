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

- (BOOL)readFrom:(id)a0;
- (void)addSelected:(id)a0;
- (id)selectedAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)selectedCount;
- (void)clearSelected;

@end
