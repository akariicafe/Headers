@class NSString;

@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL reportCharacterBoxes;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;

- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;

@end
