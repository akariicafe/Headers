@class NSArray, SISchemaAsset, NSData;

@interface CLPInstSchemaCLPCDMReplayTaskStarted : SISchemaInstrumentationMessage {
    struct { unsigned char replayType : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *pluginTaskAsset;
@property (nonatomic) BOOL hasPluginTaskAsset;
@property (copy, nonatomic) NSArray *availableSiriAssets;
@property (nonatomic) int replayType;
@property (nonatomic) BOOL hasReplayType;
@property (copy, nonatomic) NSArray *habitualUsages;
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
- (void)addAvailableSiriAssets:(id)a0;
- (void)addHabitualUsage:(id)a0;
- (id)availableSiriAssetsAtIndex:(unsigned long long)a0;
- (unsigned long long)availableSiriAssetsCount;
- (void)clearAvailableSiriAssets;
- (void)clearHabitualUsage;
- (void)deleteAvailableSiriAssets;
- (void)deleteHabitualUsage;
- (void)deletePluginTaskAsset;
- (void)deleteReplayType;
- (id)habitualUsageAtIndex:(unsigned long long)a0;
- (unsigned long long)habitualUsageCount;

@end
