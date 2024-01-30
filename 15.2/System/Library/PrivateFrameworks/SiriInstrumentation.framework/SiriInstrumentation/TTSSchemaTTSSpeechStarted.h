@class NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioOutputRoute : 1; unsigned char customerPerceivedLatencyInSecond : 1; unsigned char synthesisSource : 1; unsigned char synthesisEffect : 1; } _has;
}

@property (nonatomic) int audioOutputRoute;
@property (nonatomic) BOOL hasAudioOutputRoute;
@property (nonatomic) float customerPerceivedLatencyInSecond;
@property (nonatomic) BOOL hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) int synthesisSource;
@property (nonatomic) BOOL hasSynthesisSource;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) BOOL hasVoiceContext;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) BOOL hasSynthesisEffect;
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
