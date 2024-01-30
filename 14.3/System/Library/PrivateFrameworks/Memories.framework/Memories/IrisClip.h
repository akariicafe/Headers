@class NSString, NSArray, IrisClipStyle, IrisMovieClip;

@interface IrisClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IrisClipStyle *irisClipStyle;
@property (retain, nonatomic) NSArray *containedClips;
@property (retain, nonatomic) IrisMovieClip *introClip;
@property (retain, nonatomic) IrisMovieClip *outroClip;
@property (nonatomic) unsigned long long irisStyle;
@property (readonly, nonatomic) double minimumDuration;
@property (readonly, nonatomic) double idealDuration;
@property (readonly, nonatomic) double maximumDuration;
@property (readonly, nonatomic) BOOL introClipAvailable;
@property (readonly, nonatomic) BOOL outroClipAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedTransitions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)maxDuration;
- (BOOL)isIris;
- (void)setAudioVolume:(float)a0;
- (void)setAltAspect:(double)a0;
- (double)autoEditLongestDurationWithBlueprint:(id)a0;
- (void)setMinimumPhotoDuration:(double)a0;
- (void)setIdealPhotoDuration:(double)a0;
- (void)setMaximumPhotoDuration:(double)a0;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredInTransitionDurationRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredOutTransitionDurationRange;

@end
