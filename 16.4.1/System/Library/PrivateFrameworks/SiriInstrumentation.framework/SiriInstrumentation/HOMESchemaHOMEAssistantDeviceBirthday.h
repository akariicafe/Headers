@class NSData;

@interface HOMESchemaHOMEAssistantDeviceBirthday : SISchemaInstrumentationMessage {
    struct { unsigned char year : 1; unsigned char month : 1; } _has;
}

@property (nonatomic) unsigned int year;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) unsigned int month;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteMonth;
- (void)deleteYear;

@end
