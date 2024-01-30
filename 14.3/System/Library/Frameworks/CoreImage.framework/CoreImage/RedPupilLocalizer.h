@class NSNumber, CIVector, CIImage;

@interface RedPupilLocalizer : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) NSNumber *inputIterations;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputDecay;
@property (retain, nonatomic) NSNumber *inputGamma;
@property (retain, nonatomic) NSNumber *inputClip;
@property (retain, nonatomic) NSNumber *inputLocalizationRadius;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputDebug;
@property (retain, nonatomic) CIVector *inputAxisLong;
@property (retain, nonatomic) CIVector *inputAxisShort;
@property (retain, nonatomic) CIVector *inputPupilCenter;
@property (retain, nonatomic) NSNumber *inputSearchAxisLong;
@property (retain, nonatomic) NSNumber *inputSearchAxisShort;

- (id)outputImage;

@end
