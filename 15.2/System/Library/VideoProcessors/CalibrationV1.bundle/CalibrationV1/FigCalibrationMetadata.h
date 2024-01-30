@class NSArray;

@interface FigCalibrationMetadata : NSObject

@property (nonatomic) unsigned short version;
@property (nonatomic) float baseline;
@property (nonatomic) float referencePixelSizeInMillimeters;
@property (nonatomic) float auxiliaryPixelSizeInMillimeters;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } referenceIntrinsicMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } auxiliaryIntrinsicMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceExtrinsicMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } auxiliaryExtrinsicMatrix;
@property (copy, nonatomic) NSArray *referenceLensDistortionCoefficients;
@property (copy, nonatomic) NSArray *auxiliaryLensDistortionCoefficients;
@property (copy, nonatomic) NSArray *referenceInverseLensDistortionCoefficients;
@property (copy, nonatomic) NSArray *auxiliaryInverseLensDistortionCoefficients;
@property (nonatomic) struct CGPoint { double x; double y; } referenceLensDistortionOpticalCenter;
@property (nonatomic) struct CGPoint { double x; double y; } auxiliaryLensDistortionOpticalCenter;

- (id)description;
- (void).cxx_destruct;

@end
