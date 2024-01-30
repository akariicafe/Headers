@class NSData, POMMESSchemaPOMMESOnDeviceMetadata;

@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasPromptContext : 1; unsigned char hasDisplayHints : 1; } _has;
}

@property (nonatomic) BOOL hasPromptContext;
@property (nonatomic) BOOL hasHasPromptContext;
@property (nonatomic) BOOL hasDisplayHints;
@property (nonatomic) BOOL hasHasDisplayHints;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceMetadata *onDeviceMetadata;
@property (nonatomic) BOOL hasOnDeviceMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteHasDisplayHints;
- (void)deleteHasPromptContext;
- (void)deleteOnDeviceMetadata;

@end
