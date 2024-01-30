@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWHomeAutomationRequestMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isHomeAutomationRequestAsynchronous : 1; unsigned char targetedEntityCount : 1; unsigned char fulfilledEntityCount : 1; unsigned char smallestTargetedContainer : 1; unsigned char conditionType : 1; unsigned char isRecurring : 1; } _has;
}

@property (nonatomic) BOOL isHomeAutomationRequestAsynchronous;
@property (nonatomic) BOOL hasIsHomeAutomationRequestAsynchronous;
@property (nonatomic) unsigned int targetedEntityCount;
@property (nonatomic) BOOL hasTargetedEntityCount;
@property (nonatomic) unsigned int fulfilledEntityCount;
@property (nonatomic) BOOL hasFulfilledEntityCount;
@property (copy, nonatomic) NSArray *targetedEntityTypes;
@property (nonatomic) int smallestTargetedContainer;
@property (nonatomic) BOOL hasSmallestTargetedContainer;
@property (copy, nonatomic) NSString *targetAttribute;
@property (nonatomic) BOOL hasTargetAttribute;
@property (nonatomic) int conditionType;
@property (nonatomic) BOOL hasConditionType;
@property (nonatomic) BOOL isRecurring;
@property (nonatomic) BOOL hasIsRecurring;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTargetedEntityTypes:(id)a0;
- (void)clearTargetedEntityTypes;
- (unsigned long long)targetedEntityTypesCount;
- (id)targetedEntityTypesAtIndex:(unsigned long long)a0;

@end
