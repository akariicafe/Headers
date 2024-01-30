@class NSArray, NSData;

@interface MHSchemaMHVoiceTriggerSecondPassStarted : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassDetectedChannel : 1; unsigned char firstPassScore : 1; unsigned char firstPassOnsetChannel : 1; unsigned char firstPassOnsetScore : 1; unsigned char firstPassChannelSelectionDelayNs : 1; unsigned char firstPassMasterChannelScoreBoost : 1; unsigned char firstPassStartSampleCount : 1; unsigned char firstPassEndSampleCount : 1; unsigned char firstPassFireSampleCount : 1; unsigned char firstPassTriggerSource : 1; unsigned char earlyDetectFiredTimeOffsetInNs : 1; unsigned char earlyDetectFiredTime : 1; unsigned char firstPassPrimaryChannelScoreBoost : 1; } _has;
}

@property (nonatomic) unsigned int firstPassDetectedChannel;
@property (nonatomic) BOOL hasFirstPassDetectedChannel;
@property (nonatomic) float firstPassScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (nonatomic) unsigned int firstPassOnsetChannel;
@property (nonatomic) BOOL hasFirstPassOnsetChannel;
@property (nonatomic) float firstPassOnsetScore;
@property (nonatomic) BOOL hasFirstPassOnsetScore;
@property (copy, nonatomic) NSArray *channelSelectionScores;
@property (nonatomic) unsigned long long firstPassChannelSelectionDelayNs;
@property (nonatomic) BOOL hasFirstPassChannelSelectionDelayNs;
@property (nonatomic) float firstPassMasterChannelScoreBoost;
@property (nonatomic) BOOL hasFirstPassMasterChannelScoreBoost;
@property (nonatomic) unsigned long long firstPassStartSampleCount;
@property (nonatomic) BOOL hasFirstPassStartSampleCount;
@property (nonatomic) unsigned long long firstPassEndSampleCount;
@property (nonatomic) BOOL hasFirstPassEndSampleCount;
@property (nonatomic) unsigned long long firstPassFireSampleCount;
@property (nonatomic) BOOL hasFirstPassFireSampleCount;
@property (nonatomic) int firstPassTriggerSource;
@property (nonatomic) BOOL hasFirstPassTriggerSource;
@property (nonatomic) unsigned long long earlyDetectFiredTimeOffsetInNs;
@property (nonatomic) BOOL hasEarlyDetectFiredTimeOffsetInNs;
@property (nonatomic) float earlyDetectFiredTime;
@property (nonatomic) BOOL hasEarlyDetectFiredTime;
@property (nonatomic) float firstPassPrimaryChannelScoreBoost;
@property (nonatomic) BOOL hasFirstPassPrimaryChannelScoreBoost;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addChannelSelectionScores:(id)a0;
- (void)clearChannelSelectionScores;
- (unsigned long long)channelSelectionScoresCount;
- (id)channelSelectionScoresAtIndex:(unsigned long long)a0;

@end
