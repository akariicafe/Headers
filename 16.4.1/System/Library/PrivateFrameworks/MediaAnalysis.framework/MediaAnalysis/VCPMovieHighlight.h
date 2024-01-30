@class VCPVideoKeyFrame, VCPImageDescriptor, NSData;

@interface VCPMovieHighlight : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timerange;
@property (nonatomic) float score;
@property (nonatomic) float averageScore;
@property (nonatomic) float junkScore;
@property (nonatomic) float qualityScore;
@property (nonatomic) float expressionScore;
@property (nonatomic) float actionScore;
@property (nonatomic) float voiceScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bestPlaybackCrop;
@property (nonatomic) BOOL isAutoPlayable;
@property (nonatomic) BOOL isTrimmed;
@property (retain, nonatomic) VCPImageDescriptor *descriptor;
@property (retain, nonatomic) VCPVideoKeyFrame *keyFrame;
@property (retain, nonatomic) NSData *colorNormalization;
@property (nonatomic) BOOL isSettlingOK;
@property (nonatomic) float autoplayScore;
@property (nonatomic) float motionScore;
@property (nonatomic) float subjectScore;
@property (nonatomic) float exposureChangeScore;

- (void).cxx_destruct;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isShort;
- (void)copyScoresFrom:(id)a0;
- (void)checkAutoPlayable;
- (void)mergeSegment:(id)a0;

@end
