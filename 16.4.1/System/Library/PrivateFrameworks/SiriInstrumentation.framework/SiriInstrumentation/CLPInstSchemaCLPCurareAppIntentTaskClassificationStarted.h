@class NSData, SISchemaAsset;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char classifierModelType : 1; } _has;
}

@property (nonatomic) int classifierModelType;
@property (nonatomic) BOOL hasClassifierModelType;
@property (retain, nonatomic) SISchemaAsset *classifierModelAsset;
@property (nonatomic) BOOL hasClassifierModelAsset;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion;
@property (nonatomic) BOOL hasNlv4AssetVersion;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride;
@property (nonatomic) BOOL hasNlv4AssetVersionOverride;
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
- (void)deleteClassifierModelAsset;
- (void)deleteClassifierModelType;
- (void)deleteNlv4AssetVersion;
- (void)deleteNlv4AssetVersionOverride;

@end
