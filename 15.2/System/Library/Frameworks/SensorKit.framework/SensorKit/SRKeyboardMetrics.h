@class NSMutableDictionary, NSDictionary, NSDateInterval, NSString, NSMeasurement, NSArray;

@interface SRKeyboardMetrics : NSObject <NSSecureCoding, SRSampleExporting, SRSampling>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDateInterval *interval;
@property (copy) NSDictionary *keyboardMetaInformation;
@property (retain) NSMutableDictionary *mutableScalarMetrics;
@property (retain) NSMutableDictionary *mutablePositionalMetrics;
@property (retain) NSMutableDictionary *mutableProbabilityMetrics;
@property (readonly) double duration;
@property (readonly, copy) NSString *keyboardIdentifier;
@property (readonly, copy) NSString *version;
@property (readonly) NSMeasurement *width;
@property (readonly) NSMeasurement *height;
@property (readonly, copy) NSArray *inputModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)typingSpeed;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;
- (id)initWithInterval:(id)a0 metaInformation:(id)a1;
- (id)scalarMetrics;
- (id)probabilityMetrics;
- (id)positionalMetrics;
- (long long)wordCountForSentimentCategory:(long long)a0;
- (long long)emojiCountForSentimentCategory:(long long)a0;
- (long long)totalWords;
- (long long)totalAlteredWords;
- (long long)totalTaps;
- (long long)totalDrags;
- (long long)totalDeletes;
- (long long)totalEmojis;
- (long long)totalPaths;
- (double)totalPathTime;
- (id)totalPathLength;
- (long long)totalAutoCorrections;
- (long long)totalSpaceCorrections;
- (long long)totalRetroCorrections;
- (long long)totalTranspositionCorrections;
- (long long)totalInsertKeyCorrections;
- (long long)totalSkipTouchCorrections;
- (long long)totalNearKeyCorrections;
- (long long)totalSubstitutionCorrections;
- (long long)totalHitTestCorrections;
- (double)totalTypingDuration;
- (long long)totalAbsolutistWords;
- (long long)totalDownWords;
- (long long)totalDeathWords;
- (long long)totalAnxietyWords;
- (long long)totalAngerWords;
- (long long)totalHealthFeelingWords;
- (long long)totalPositiveEmojis;
- (long long)totalSadEmojis;
- (long long)totalAnxietyEmojis;
- (long long)totalAngerEmojis;
- (long long)totalHealthFeelingEmojis;
- (long long)totalLowEnergyEmojis;
- (long long)totalConfusedEmojis;
- (long long)totalPathPauses;
- (double)pathTypingSpeed;
- (long long)totalPauses;
- (long long)totalTypingEpisodes;
- (id)upErrorDistance;
- (id)downErrorDistance;
- (id)spaceUpErrorDistance;
- (id)spaceDownErrorDistance;
- (id)deleteUpErrorDistance;
- (id)deleteDownErrorDistance;
- (id)shortWordCharKeyUpErrorDistance;
- (id)shortWordCharKeyDownErrorDistance;
- (id)touchDownUp;
- (id)spaceTouchDownUp;
- (id)deleteTouchDownUp;
- (id)shortWordCharKeyTouchDownUp;
- (id)touchDownDown;
- (id)charKeyToPrediction;
- (id)shortWordCharKeyToCharKey;
- (id)charKeyToAnyTapKey;
- (id)anyTapToCharKey;
- (id)spaceToCharKey;
- (id)charKeyToSpaceKey;
- (id)spaceToDeleteKey;
- (id)deleteToSpaceKey;
- (id)spaceToSpaceKey;
- (id)spaceToShiftKey;
- (id)spaceToPlaneChangeKey;
- (id)spaceToPredictionKey;
- (id)deleteToCharKey;
- (id)charKeyToDelete;
- (id)deleteToDelete;
- (id)deleteToShiftKey;
- (id)deleteToPlaneChangeKey;
- (id)anyTapToPlaneChangeKey;
- (id)planeChangeToAnyTap;
- (id)charKeyToPlaneChangeKey;
- (id)planeChangeKeyToCharKey;
- (id)pathErrorDistanceRatio;
- (id)deleteToPath;
- (id)pathToDelete;
- (id)spaceToPath;
- (id)pathToSpace;
- (id)pathToPath;
- (id)longWordUpErrorDistance;
- (id)longWordDownErrorDistance;
- (id)longWordTouchDownUp;
- (id)longWordTouchDownDown;
- (id)deleteToDeletes;

@end
