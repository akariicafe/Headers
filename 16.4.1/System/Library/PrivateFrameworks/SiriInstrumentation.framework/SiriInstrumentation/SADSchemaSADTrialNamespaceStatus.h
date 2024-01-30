@class NSArray, SISchemaVersion, SADSchemaSADTrialRollout, NSData;

@interface SADSchemaSADTrialNamespaceStatus : SISchemaInstrumentationMessage {
    struct { unsigned char trialNamespace : 1; } _has;
}

@property (retain, nonatomic) SISchemaVersion *namespaceCompatabilityVersion;
@property (nonatomic) BOOL hasNamespaceCompatabilityVersion;
@property (retain, nonatomic) SADSchemaSADTrialRollout *rollout;
@property (nonatomic) BOOL hasRollout;
@property (copy, nonatomic) NSArray *assets;
@property (nonatomic) int trialNamespace;
@property (nonatomic) BOOL hasTrialNamespace;
@property (readonly, nonatomic) NSData *jsonData;

- (id)assetsAtIndex:(unsigned long long)a0;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addAssets:(id)a0;
- (void).cxx_destruct;
- (void)deleteAssets;
- (void)deleteNamespaceCompatabilityVersion;
- (void)deleteRollout;
- (void)deleteTrialNamespace;

@end
