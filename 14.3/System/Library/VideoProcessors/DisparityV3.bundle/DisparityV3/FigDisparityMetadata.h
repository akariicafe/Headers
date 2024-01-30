@class NSArray;

@interface FigDisparityMetadata : NSObject

@property (nonatomic) unsigned short version;
@property (nonatomic) float baseline;
@property (nonatomic) float telePixelSizeInMillimeters;
@property (nonatomic) float widePixelSizeInMillimeters;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } teleIntrinsicMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } wideIntrinsicMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } teleExtrinsicMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } wideExtrinsicMatrix;
@property (copy, nonatomic) NSArray *teleLensDistortionCoefficients;
@property (copy, nonatomic) NSArray *wideLensDistortionCoefficients;
@property (copy, nonatomic) NSArray *teleInverseLensDistortionCoefficients;
@property (copy, nonatomic) NSArray *wideInverseLensDistortionCoefficients;
@property (nonatomic) struct CGPoint { double x; double y; } teleLensDistortionOpticalCenter;
@property (nonatomic) struct CGPoint { double x; double y; } wideLensDistortionOpticalCenter;

- (void).cxx_destruct;
- (id)description;

@end
