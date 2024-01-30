@class NSString;
@protocol PXAudioAsset;

@interface PXStoryMockAutoEditDecisionList : NSObject <PXStoryAutoEditDecisionList>

@property (readonly, nonatomic) NSString *colorGradeCategory;
@property (readonly, nonatomic) id<PXAudioAsset> song;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outroDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultDisplayAssetPresentationDuration;
@property (readonly, nonatomic) BOOL allowsNUp;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *decisionPapertrail;
@property (readonly, nonatomic) long long numberOfClips;

- (id)init;
- (void).cxx_destruct;
- (id)clipAtIndex:(long long)a0;
- (id)clipForDisplayAsset:(id)a0;
- (void)enumerateClipsUsingBlock:(id /* block */)a0;
- (id)initWithSong:(id)a0;

@end
