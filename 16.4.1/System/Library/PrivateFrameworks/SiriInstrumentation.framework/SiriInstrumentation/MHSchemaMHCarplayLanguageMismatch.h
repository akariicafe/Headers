@class NSString, NSData;

@interface MHSchemaMHCarplayLanguageMismatch : SISchemaInstrumentationMessage {
    struct { unsigned char carplayTriggerMode : 1; } _has;
}

@property (copy, nonatomic) NSString *carHeadUnitSelectedLocale;
@property (nonatomic) BOOL hasCarHeadUnitSelectedLocale;
@property (nonatomic) int carplayTriggerMode;
@property (nonatomic) BOOL hasCarplayTriggerMode;
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
- (void)deleteCarHeadUnitSelectedLocale;
- (void)deleteCarplayTriggerMode;

@end
