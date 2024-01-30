@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelBuildStarted : SISchemaInstrumentationMessage {
    struct { unsigned char artifactSizeInBytes : 1; unsigned char locale : 1; } _has;
}

@property (nonatomic) unsigned long long artifactSizeInBytes;
@property (nonatomic) BOOL hasArtifactSizeInBytes;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
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
- (void)deleteAppBundleId;
- (void)deleteArtifactSizeInBytes;
- (void)deleteLocale;

@end
