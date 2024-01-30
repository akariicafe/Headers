@class NSString;
@protocol PXAudioAsset, PXStoryAutoEditClipCatalog;

@interface PXStoryConcreteAutoEditDecisionList : NSObject <PXStoryAutoEditDecisionList> {
    id<PXStoryAutoEditClipCatalog> _clipCatalog;
}

@property (readonly, nonatomic) NSString *colorGradeCategory;
@property (readonly, nonatomic) id<PXAudioAsset> song;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outroDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultDisplayAssetPresentationDuration;
@property (readonly, nonatomic) BOOL allowsNUp;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *decisionPapertrail;
@property (readonly, nonatomic) long long numberOfClips;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (id)clipForDisplayAsset:(id)a0;
- (id)clipAtIndex:(long long)a0;
- (void)enumerateClipsUsingBlock:(id /* block */)a0;
- (id)initWithColorGradeCategory:(id)a0 song:(id)a1 clipCatalog:(id)a2 constrainedOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a3 outroDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;

@end
