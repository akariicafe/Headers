@class JFXCompositionTrackGroup;
@protocol JFXPlayableElement;

@interface EditListCompositionState : NSObject

@property (retain, nonatomic) JFXCompositionTrackGroup *currentTrackGroup;
@property (retain, nonatomic) JFXCompositionTrackGroup *alternateTrackGroup;
@property (weak, nonatomic) id<JFXPlayableElement> clip;
@property (nonatomic) int overlapLeft;
@property (nonatomic) int overlapRight;
@property (nonatomic) BOOL isLastClip;
@property (nonatomic) BOOL clipRequiresCA;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } videoCompTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } audioCompTimeRange;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) int audioEndOffset;

- (void).cxx_destruct;
- (id)description;
- (void)swapTrackGroup;

@end
