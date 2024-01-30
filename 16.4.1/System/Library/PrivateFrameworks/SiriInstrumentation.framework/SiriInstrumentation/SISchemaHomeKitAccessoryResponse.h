@class NSData;

@interface SISchemaHomeKitAccessoryResponse : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitAccessoryType : 1; unsigned char numAccessoriesCompleted : 1; unsigned char numAccessoriesNotCompleted : 1; } _has;
}

@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic) BOOL hasHomeKitAccessoryType;
@property (nonatomic) int numAccessoriesCompleted;
@property (nonatomic) BOOL hasNumAccessoriesCompleted;
@property (nonatomic) int numAccessoriesNotCompleted;
@property (nonatomic) BOOL hasNumAccessoriesNotCompleted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteHomeKitAccessoryType;
- (void)deleteNumAccessoriesCompleted;
- (void)deleteNumAccessoriesNotCompleted;

@end
