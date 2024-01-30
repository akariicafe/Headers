@class PLCharacterRecognitionAttributes, PLVisualSearchAttributes, NSData, PLManagedAsset, NSDate;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (retain, nonatomic) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic) unsigned long long mediaAnalysisVersion;
@property (nonatomic) int bestVideoRangeDurationTimeScale;
@property (nonatomic) long long bestVideoRangeDurationValue;
@property (nonatomic) int bestVideoRangeStartTimeScale;
@property (nonatomic) long long bestVideoRangeStartValue;
@property (nonatomic) long long packedBestPlaybackRect;
@property (nonatomic) float blurrinessScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float wallpaperScore;
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) float videoScore;
@property (nonatomic) float activityScore;
@property (nonatomic) float audioScore;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic) short audioClassification;
@property (nonatomic) short probableRotationDirection;
@property (nonatomic) float probableRotationDirectionConfidence;
@property (retain, nonatomic) NSData *colorNormalizationData;
@property (nonatomic) unsigned short screenTimeDeviceImageSensitivity;
@property (nonatomic) unsigned short syndicationProcessingValue;
@property (nonatomic) unsigned long long syndicationProcessingVersion;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) PLCharacterRecognitionAttributes *characterRecognitionAttributes;
@property (retain, nonatomic) PLVisualSearchAttributes *visualSearchAttributes;

+ (id)entityName;
+ (id)fetchRequest;

- (void)willSave;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestVideoTimeRange;
- (void)resetCharacterRecognitionAttributes;
- (void)resetVisualSearchAttributes;
- (void)setBestVideoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setCharacterRecognitionData:(id)a0 machineReadableCodeData:(id)a1 algorithmVersion:(short)a2 adjustmentVersion:(id)a3;
- (void)setVisualSearchData:(id)a0 algorithmVersion:(short)a1 adjustmentVersion:(id)a2;

@end
