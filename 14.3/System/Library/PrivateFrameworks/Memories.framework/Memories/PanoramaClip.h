@class NSArray, KenBurnsClip, NSString;

@interface PanoramaClip : KenBurnsClip <CompoundClipInformation>

@property (retain, nonatomic) NSArray *containedClips;
@property (retain, nonatomic) KenBurnsClip *templateClip;
@property (readonly, nonatomic) int projectFrameRate;
@property (readonly, nonatomic) double projectAspectRatio;
@property (nonatomic) unsigned long long panoramaStyle;
@property (nonatomic) unsigned long long panoramaDirection;
@property (nonatomic) double panoramaTransitionDuration;
@property (nonatomic) double burstAcrossSubClipDuration;
@property (retain, nonatomic) NSArray *detectedFaceRects;
@property (readonly, nonatomic) BOOL panSupportsDoublePan;
@property (readonly, nonatomic) BOOL panSupportsTriplePan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRandomNumberGenerator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPano;
- (void)setDuration:(int)a0;
- (BOOL)isBurstAcrossStyleSuitable;
- (id)initWithKenBurnsClip:(id)a0;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (void)adjustDurationsOfClips:(id)a0 withInTransition:(id)a1 outTransition:(id)a2;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (void)takePropertiesFromKenBurnsClip:(id)a0;
- (BOOL)expandsEditList;
- (struct CGSize { double x0; double x1; })panoramaViewportSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)descriptionOfPanoramaStyle;
- (id)descriptionOfPanoramaDirection;
- (id)buildClipsForSinglePanorama;
- (id)buildClipsForDoublePanorama;
- (id)buildClipsForTriplePanorama;
- (id)appendLetterboxZoomOutToClips:(id)a0 zoomOutFromLastClip:(BOOL)a1;
- (id)buildClipsForBurstAcrossPanorama;
- (void)computeBurstAcrossClipCount:(int *)a0 minLeftEdge:(double *)a1 maxLeftEdge:(double *)a2;
- (void)equalizeDurationsOfClips:(id)a0 totalDuration:(int)a1;
- (void)lowLevelCustomizePanoramaKB:(id)a0 panRight:(BOOL)a1 leftLimit:(double)a2 rightLimit:(double)a3 allowLeftCrop:(BOOL)a4 allowRightCrop:(BOOL)a5 leftZoom:(double)a6 rightZoom:(double)a7;
- (void)offsetKenBurnsFramesForFaces:(id)a0 panRight:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectEnclosingAllFacesWithFaceScale:(double)a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)totalDurationOfClips:(id)a0;
- (void)logDetectedFaceRects;

@end
