@class NSArray, NSString;
@protocol PXStorySongResource, PXAudioCueSource;

@interface PXStoryDummyStyle : NSObject <PXStoryMutableDummyStyle, PXStoryStyle>

@property (nonatomic) double defaultSegmentDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outroDuration;
@property (nonatomic) long long cropVerticalContentMode;
@property (nonatomic) long long cropMode;
@property (copy, nonatomic) NSArray *allowedClipCompositionsInPortrait;
@property (copy, nonatomic) NSArray *allowedClipCompositionsInLandscape;
@property (nonatomic) long long oneUpKenBurnsKind;
@property (nonatomic) long long twoUpKenBurnsKind;
@property (nonatomic) long long threeUpKenBurnsKind;
@property (nonatomic) double kenBurnsScale;
@property (nonatomic) unsigned int kenBurnsPanDirection;
@property (nonatomic) double kenBurnsDistance;
@property (nonatomic) struct CGPoint { double x; double y; } kenBurnsRelativeTransformOrigin;
@property (nonatomic) double kenBurnsRotationInDegrees;
@property (nonatomic) long long twoUpSeparatorEffectKind;
@property (nonatomic) long long threeUpSeparatorEffectKind;
@property (nonatomic) double separatorPanDistance;
@property (nonatomic) double separatorRotationAngle;
@property (nonatomic) struct { char orderOutTransition; unsigned char options; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; char fallbackFromTransitionKind; union { char panDirection; char scaleDirection; char rotateDirection; char wipeKind; } ; union { double scaleRelativeFactor; double rotateAngleInDegrees; char wipeFirstAssetDirection; } ; } transitionInfo;
@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) long long customColorGradeKind;
@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (readonly, nonatomic) id<PXAudioCueSource> cueSource;
@property (readonly, nonatomic) BOOL isCustomized;

- (id)init;
- (id)initWithConfiguration:(id /* block */)a0;
- (void).cxx_destruct;
- (id)createRandomNumberGenerators;
- (id)timelineStyleWithSpec:(id)a0 resourcesDataSource:(id)a1 randomNumberGenerators:(id)a2 errorReporter:(id)a3;

@end
