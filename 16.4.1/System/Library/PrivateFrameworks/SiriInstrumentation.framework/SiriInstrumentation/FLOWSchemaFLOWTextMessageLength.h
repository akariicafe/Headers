@class NSData;

@interface FLOWSchemaFLOWTextMessageLength : SISchemaInstrumentationMessage {
    struct { unsigned char messageCharLength : 1; unsigned char messageWordLength : 1; } _has;
}

@property (nonatomic) unsigned int messageCharLength;
@property (nonatomic) BOOL hasMessageCharLength;
@property (nonatomic) unsigned int messageWordLength;
@property (nonatomic) BOOL hasMessageWordLength;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteMessageCharLength;
- (void)deleteMessageWordLength;

@end
