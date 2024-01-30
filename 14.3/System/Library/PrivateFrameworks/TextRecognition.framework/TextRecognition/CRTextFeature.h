@class NSArray, NSString, CRImage, NSNumber;

@interface CRTextFeature : NSObject <NSCoding, NSCopying>

@property BOOL contextSet;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGPoint { double x; double y; } topLeft;
@property struct CGPoint { double x; double y; } topRight;
@property struct CGPoint { double x; double y; } bottomLeft;
@property struct CGPoint { double x; double y; } bottomRight;
@property (retain) NSArray *subFeatures;
@property (retain) NSArray *stringValueCandidates;
@property (retain) NSArray *candidateProbs;
@property (retain) NSArray *candidateActivationProbs;
@property (retain) NSArray *subFeatureCandidates;
@property long long bestCandidateIndex;
@property (retain) NSArray *segmentationBreakPoints;
@property BOOL shouldExpandToFullWidth;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *gtStringValue;
@property (retain) CRImage *imageCut;
@property (retain) NSNumber *confidence;
@property (readonly) struct CGPoint { double x; double y; } toplineOrigin;
@property (readonly) struct CGPoint { double x; double y; } baselineOrigin;
@property float baselineAngle;
@property unsigned char sizeHint;
@property float textlineHeight;
@property int featureMapID;
@property int punctuationGuess;

+ (id)sortedRotateTextFeatures:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 radians:(float)a2 sortingWithinLine:(BOOL)a3;
+ (id)sortedTextFeatures:(id)a0;
+ (id)lineFeatures:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2;
+ (id)overlayFeatures:(id)a0 onImage:(id)a1 showSubFeatures:(BOOL)a2;
+ (id)overlayFeaturesVertices:(id)a0 onImage:(id)a1 showSubFeatures:(BOOL)a2;

- (BOOL)isUp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDown;
- (id)initWithCoder:(id)a0;
- (id)initWithSubfeatures:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSubfeatures:(id)a0 stringValue:(id)a1;
- (void)scale:(struct CGPoint { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (void)updateSizeHints;
- (id)wordFeatures;
- (id)initWithFeatureRect:(id)a0 subFeatureRects:(id)a1;
- (void)setBaselineOrigin:(struct CGPoint { double x0; double x1; })a0 toplineOrigin:(struct CGPoint { double x0; double x1; })a1 slope:(float)a2;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 TopRight:(struct CGPoint { double x0; double x1; })a1 BottomLeft:(struct CGPoint { double x0; double x1; })a2 BottomRight:(struct CGPoint { double x0; double x1; })a3;
- (id)createWordSubFeaturesForCandidateAtIndex:(long long)a0 topWhiteSpacePoints:(id)a1 bottomWhiteSpacePoints:(id)a2;
- (id)createCharacterSubFeaturesForCandidateAtIndex:(long long)a0;
- (float)calculateTextBoxHeightForImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1;
- (id)initWithCITextFeature:(id)a0 inImage:(id)a1;
- (id)initWithFeatureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImage:(id)a1;
- (id)initWithFeatureRect:(id)a0 subFeatureRects:(id)a1 inImage:(id)a2;
- (id)initWithCCFeatureRect:(id)a0 subFeatureRects:(id)a1 rotatePortrait:(BOOL)a2;
- (id)textFeatureScaledToImageWidth:(float)a0 height:(float)a1;
- (id)textFeaturebyPaddingToWidth:(float)a0 height:(float)a1;
- (float)slopeOfSubFeatures;
- (id)textFeatureScaledToImage:(id)a0;
- (void)estimateTopAndBaseline;
- (struct CGPoint { double x0; double x1; })getBaselineVector;
- (id)initWithVNTextObsevation:(id)a0;
- (id)initWithSubfeatureRects:(id)a0 inImage:(id)a1;
- (id)textFeatureSplitForStringValue:(id)a0;
- (float)caseInsensitiveProbabilityCandidateIndex:(int)a0;
- (void)addKohlsDigitProjection;
- (void)adjustProbabilitiesWithPunctuationGuess;
- (float)aspectRatioWithImageSize:(struct CGSize { double x0; double x1; })a0;

@end
