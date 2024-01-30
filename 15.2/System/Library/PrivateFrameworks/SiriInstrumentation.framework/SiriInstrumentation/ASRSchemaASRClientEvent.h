@class ASRSchemaASRPreheatContext, ASRSchemaASRAudioPacketArrivalContext, ASRSchemaASRInitializationContext, ASRSchemaASRFirstAudioPacketProcessed, ASRSchemaASRSampledAudioFileStored, ASRSchemaASRRecognitionResultTier1, ASRSchemaASRPartialResultGenerated, ASRSchemaASRPackageGenerated, ASRSchemaASRSampledAudioFileEnqueueFailed, ASRSchemaASRAssetLoadContext, ASRSchemaASRSampledAudioFileStorageFailed, ASRSchemaASRJitLanguageModelEnrollmentEndedTier1, ASRSchemaASRFinalResultGenerated, ASRSchemaASRFinalAudioPacketContainingSpeechReceived, ASRSchemaASRJitLanguageModelEnrollmentContext, ASRSchemaASRSampledAudioFileEnqueued, ASRSchemaASRIntermediateUtteranceInfoTier1, NSData, ASRSchemaASRSampledAudioFileDeleted, ASRSchemaASRSampledAudioFileDeletionFailed, ASRSchemaASRClientEventMetadata, ASRSchemaASRRequestContext;

@interface ASRSchemaASRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) ASRSchemaASRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ASRSchemaASRPreheatContext *preheatContext;
@property (nonatomic) BOOL hasPreheatContext;
@property (retain, nonatomic) ASRSchemaASRRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) ASRSchemaASRPartialResultGenerated *partialResultGenerated;
@property (nonatomic) BOOL hasPartialResultGenerated;
@property (retain, nonatomic) ASRSchemaASRPackageGenerated *packageGenerated;
@property (nonatomic) BOOL hasPackageGenerated;
@property (retain, nonatomic) ASRSchemaASRRecognitionResultTier1 *recognitionResultTier1;
@property (nonatomic) BOOL hasRecognitionResultTier1;
@property (retain, nonatomic) ASRSchemaASRFinalResultGenerated *finalResultGenerated;
@property (nonatomic) BOOL hasFinalResultGenerated;
@property (retain, nonatomic) ASRSchemaASRIntermediateUtteranceInfoTier1 *intermediateUtteranceInfoTier1;
@property (nonatomic) BOOL hasIntermediateUtteranceInfoTier1;
@property (retain, nonatomic) ASRSchemaASRInitializationContext *initializationContext;
@property (nonatomic) BOOL hasInitializationContext;
@property (retain, nonatomic) ASRSchemaASRAssetLoadContext *assetLoadContext;
@property (nonatomic) BOOL hasAssetLoadContext;
@property (retain, nonatomic) ASRSchemaASRJitLanguageModelEnrollmentContext *languageModelEnrollmentContext;
@property (nonatomic) BOOL hasLanguageModelEnrollmentContext;
@property (retain, nonatomic) ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 *jitLanguageModelEnrollmentEndedTier1;
@property (nonatomic) BOOL hasJitLanguageModelEnrollmentEndedTier1;
@property (retain, nonatomic) ASRSchemaASRAudioPacketArrivalContext *audioPacketArrivalContext;
@property (nonatomic) BOOL hasAudioPacketArrivalContext;
@property (retain, nonatomic) ASRSchemaASRFirstAudioPacketProcessed *firstAudioPacketProcessed;
@property (nonatomic) BOOL hasFirstAudioPacketProcessed;
@property (retain, nonatomic) ASRSchemaASRFinalAudioPacketContainingSpeechReceived *finalAudioPacketContainingSpeechReceived;
@property (nonatomic) BOOL hasFinalAudioPacketContainingSpeechReceived;
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileStored *sampledAudioFileStored;
@property (nonatomic) BOOL hasSampledAudioFileStored;
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileStorageFailed *sampledAudioFileStorageFailed;
@property (nonatomic) BOOL hasSampledAudioFileStorageFailed;
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileEnqueued *sampledAudioFileEnqueued;
@property (nonatomic) BOOL hasSampledAudioFileEnqueued;
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileEnqueueFailed *sampledAudioFileEnqueueFailed;
@property (nonatomic) BOOL hasSampledAudioFileEnqueueFailed;
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileDeleted *sampledAudioFileDeleted;
@property (nonatomic) BOOL hasSampledAudioFileDeleted;
@property (retain, nonatomic) ASRSchemaASRSampledAudioFileDeletionFailed *sampledAudioFileDeletionFailed;
@property (nonatomic) BOOL hasSampledAudioFileDeletionFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
