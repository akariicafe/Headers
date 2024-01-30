@class IrisClip;

@interface IrisClipStyle : NSObject

@property (weak, nonatomic) IrisClip *irisClip;

- (double)maximumDuration;
- (void).cxx_destruct;
- (int)duration;
- (double)minimumDuration;
- (double)idealDuration;
- (int)projectFrameRate;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (double)minimumPhotoDuration;
- (double)idealPhotoDuration;
- (double)maximumPhotoDuration;
- (double)projectAspectRatio;
- (void)adjustGeometryOfIntroClip:(id)a0 outroClip:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredInTransitionDurationRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredOutTransitionDurationRange;
- (BOOL)buildIntro;
- (BOOL)buildOutro;

@end
