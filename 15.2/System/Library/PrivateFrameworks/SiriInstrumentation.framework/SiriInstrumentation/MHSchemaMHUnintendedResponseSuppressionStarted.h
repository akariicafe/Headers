@class NSData, MHSchemaMHLatticeFalseTriggerMitigationEnded, MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated;

@interface MHSchemaMHUnintendedResponseSuppressionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numAsrRecords : 1; unsigned char numTokensTopPath : 1; unsigned char trailingSilenceDurationInNs : 1; } _has;
}

@property (nonatomic) unsigned int numAsrRecords;
@property (nonatomic) BOOL hasNumAsrRecords;
@property (nonatomic) unsigned int numTokensTopPath;
@property (nonatomic) BOOL hasNumTokensTopPath;
@property (nonatomic) unsigned long long trailingSilenceDurationInNs;
@property (nonatomic) BOOL hasTrailingSilenceDurationInNs;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *aftmScore;
@property (nonatomic) BOOL hasAftmScore;
@property (retain, nonatomic) MHSchemaMHLatticeFalseTriggerMitigationEnded *lrnnScore;
@property (nonatomic) BOOL hasLrnnScore;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
