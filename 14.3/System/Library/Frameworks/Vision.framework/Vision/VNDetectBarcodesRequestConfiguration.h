@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration

@property (copy, nonatomic) NSArray *symbologies;
@property (copy, nonatomic) NSString *locateMode;
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode;

- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
