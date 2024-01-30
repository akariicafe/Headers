@class NSString;

@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL reportCharacterBoxes;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;
@property (copy, nonatomic) NSString *additionalCharacters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;

@end
