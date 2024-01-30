@class NSString, NSData;

@interface MHSchemaMHSpeakerFalseTriggerMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char speakerMatchScore : 1; unsigned char thresholdScore : 1; unsigned char processedAudioDurationInNs : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float speakerMatchScore;
@property (nonatomic) BOOL hasSpeakerMatchScore;
@property (nonatomic) float thresholdScore;
@property (nonatomic) BOOL hasThresholdScore;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (nonatomic) double processedAudioDurationInNs;
@property (nonatomic) BOOL hasProcessedAudioDurationInNs;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
- (void)deleteErrorCode;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteProcessedAudioDurationInNs;
- (void)deleteSpeakerMatchScore;
- (void)deleteThresholdScore;

@end
