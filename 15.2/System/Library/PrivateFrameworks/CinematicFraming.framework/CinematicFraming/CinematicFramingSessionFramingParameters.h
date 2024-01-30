@interface CinematicFramingSessionFramingParameters : NSObject

@property (nonatomic) float horizontalMinAbsoluteDifferenceThreshold;
@property (nonatomic) float horizontalMinRelativeDifferenceThreshold;
@property (nonatomic) float widthPaddingMultiplierNoFocusTight;
@property (nonatomic) float widthPaddingMultiplierNoFocusRelaxed;
@property (nonatomic) float widthPaddingAdditive;
@property (nonatomic) float topMarginFractionTight;
@property (nonatomic) float topMarginFractionRelaxed;
@property (nonatomic) float minCropSize;
@property (nonatomic) float deadbandWidthMinFraction;
@property (nonatomic) float deadbandWidthMaxFraction;
@property (nonatomic) float deadbandWidthFractionOfScreenWidth;
@property (nonatomic) float deadbandHeightFractionOfScreenHeight;
@property (nonatomic) float deadbandTopOffsetFractionOfScreenHeight;
@property (nonatomic) float subjectWidthPaddingMultiplier;
@property (nonatomic) float subjectHeightPaddingMultiplier;

- (id)initWithPlist:(id)a0;
- (id)asPlist;
- (void)_initializeWithPlist:(id)a0;
- (id)initWithPlistPath:(id)a0;

@end
