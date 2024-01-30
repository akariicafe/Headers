@class PLManagedAsset, NSDate;

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
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) float videoScore;
@property (nonatomic) float activityScore;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic) short audioClassification;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)entityName;
+ (id)fetchRequest;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestVideoTimeRange;
- (void)setBestVideoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
