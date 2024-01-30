@class NSString, NSData;

@interface INFERENCESchemaINFERENCEConfirmationPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char resolution : 1; } _has;
}

@property (copy, nonatomic) NSString *anonymizedEntityPresented;
@property (nonatomic) BOOL hasAnonymizedEntityPresented;
@property (nonatomic) int resolution;
@property (nonatomic) BOOL hasResolution;
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
- (void)deleteAnonymizedEntityPresented;
- (void)deleteResolution;

@end
