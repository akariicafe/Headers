@class SoftISPStaticParameters, NSArray, NSDictionary;

@interface SoftISPConfig : NSObject

@property (readonly, nonatomic) SoftISPStaticParameters *staticParameters;
@property (nonatomic) unsigned int inputPixelFormat;
@property (retain, nonatomic) NSArray *inputMTLPixelFormatForPlane;
@property (nonatomic) unsigned int outputPixelFormat;
@property (retain, nonatomic) NSArray *outputMTLPixelFormatForPlane;
@property (nonatomic) union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } maximumOutputDimensions;
@property (retain, nonatomic) NSDictionary *auxiliaryPixelFormats;
@property (nonatomic) int stageConfigMode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStaticParameters:(id)a0;
- (int)validateInputFrame:(id)a0;
- (int)validateOutputFrame:(id)a0;

@end
