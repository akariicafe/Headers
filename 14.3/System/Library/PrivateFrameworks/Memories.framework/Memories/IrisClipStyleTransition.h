@interface IrisClipStyleTransition : IrisClipStyle

@property (readonly, nonatomic) int containedTransitionOverlapOffset;
@property (nonatomic) BOOL buildIntro;
@property (nonatomic) BOOL buildOutro;
@property (nonatomic) BOOL videoContainedWithinTransitions;

- (double)maximumDuration;
- (double)minimumDuration;
- (double)idealDuration;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (int)minimumPhotoFrameDuration;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredInTransitionDurationRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredOutTransitionDurationRange;

@end
