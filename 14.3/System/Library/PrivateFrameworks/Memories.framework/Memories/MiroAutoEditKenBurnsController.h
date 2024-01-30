@class NSArray, KenBurnsClip, NSDictionary, Project;

@interface MiroAutoEditKenBurnsController : NSObject

@property (retain, nonatomic) KenBurnsClip *kbClip;
@property (nonatomic) unsigned long long panStyle;
@property (nonatomic) unsigned long long kbStyle;
@property (nonatomic) BOOL kbReassignment;
@property (nonatomic) double maximumZoomValue;
@property (nonatomic) BOOL interestingRegionsEstablished;
@property (nonatomic) BOOL hasAreasOfInterest;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unionOfAllInterestingRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unionOfAllFaceRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unionOfAllSaliencyRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleSafeInterestingRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finishAreaOfInterest;
@property (retain, nonatomic) NSArray *featuredPersonsDetectedFaces;
@property (retain, nonatomic) NSArray *allPersonsAndPetsDetectedFaces;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property (readonly, nonatomic) double horizonNormalizedFromTop;
@property (nonatomic) double projectAspect;
@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (nonatomic) double targetAspect;
@property (nonatomic) BOOL disableCroppingWithoutPet;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionOfAllInterestingRegionsRectForAsset:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForAsset:(id)a0 targetAspect:(double)a1 style:(unsigned long long)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForAsset:(id)a0 targetAspect:(double)a1 memoryTypeDisablesCropping:(BOOL)a2 memoryCategory:(unsigned long long)a3 memorySubcategory:(unsigned long long)a4 memoryFeaturesPersonInAsset:(id)a5 featuredPersonsInMemoryAsFaceRanges:(id)a6;
+ (BOOL)shouldHeroSubjectForCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1;
+ (BOOL)shouldTryToFitAllFaces:(unsigned long long)a0 subcategory:(unsigned long long)a1;
+ (void)prepareKBClip:(id)a0 project:(id)a1;

- (void).cxx_destruct;
- (BOOL)isTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roundValuesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canSupportKB;
- (double)clampZoomDifference:(double)a0 kenBurnsPace:(unsigned long long)a1;
- (void)assignStartAndEndRect;
- (BOOL)backgroundTreatmentRequiredForStartEndRect;
- (void)finishConfiguringKBInfo;
- (BOOL)shouldFeatureSpecificPerson;
- (BOOL)assetIsFalsePositiveCandidateMADPets;
- (BOOL)assetHasFeaturedPeople;
- (double)rectIntersectionAmount:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isPartialFaceFramingAcceptable:(id)a0 unionOfAllFaceRegionsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minFaceAreaIntersectingAmount:(double)a2;
- (BOOL)shouldTryToFitAllFaces;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })forceFeaturedPersonZoomCrop;
- (BOOL)canCropRectSafelyFillFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAttemptingToFrameAllFacesAcceptable:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 minFaceAreaIntersectingAmount:(double)a1;
- (BOOL)isAttemptingToFrameAllFeaturedFacesAcceptable:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 minFaceAreaIntersectingAmount:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInCorrectAspectRatioInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rectToInclude:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetAspectRatio:(float)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendAllTheThings:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxRectICanExtendTo:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendAsMuchAsPossibleWithoutIncludingOtherFaces:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerAroundAllFacesIncluded:(id)a0 framingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minFaceAreaIntersectingAmount:(double)a2;
- (void)prepareInterestingRegionsUsingMLFraming;
- (void)prepareInterestingRegions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })noInformationCrop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })forceTitleZoomCrop;
- (void)establishInterestingRegions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interestingRegionsAdjusted;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendAllTheThings:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignment:(long long)a1;
- (void)_adjustZoomSpeedOfKenBurnsClip;
- (void)_customizePanOnlyKenBurnsClip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomToPeopleInterestingRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_customizePortraitKB:(id)a0 normalizedVerticalCenter:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_panFrameForStart:(BOOL)a0;
- (double)_scaleToPanOffsetFromScale:(double)a0;
- (BOOL)clipRequiresOneUp:(id)a0;
- (BOOL)clipEligibleForNUpFraming:(id)a0;
- (BOOL)shouldFeatureSpecificPersonForClip:(id)a0;
- (void)applyKenBurnsForClip:(id)a0 kenBurnsStyle:(unsigned long long)a1 panStyle:(unsigned long long)a2 kenBurnsPace:(unsigned long long)a3 maxiumumZoomValue:(double)a4;

@end
