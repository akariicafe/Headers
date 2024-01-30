@class NSData;

@interface ANCSchemaANCServerUserResponseEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char userResponseCategory : 1; } _has;
}

@property (nonatomic) int userResponseCategory;
@property (nonatomic) BOOL hasUserResponseCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteUserResponseCategory;

@end
