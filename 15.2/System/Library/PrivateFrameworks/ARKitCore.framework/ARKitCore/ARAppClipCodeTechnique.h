@class NSDictionary, NSMutableDictionary, BCSAppClipCodeURLDecoder;

@interface ARAppClipCodeTechnique : ARImageBasedTechnique {
    struct AppC3DSession { } *_appClipCodeSession;
    NSDictionary *_appClipCodeTrackingOptions;
    NSMutableDictionary *_decodedURLs;
    BCSAppClipCodeURLDecoder *_urlDecoder;
}

@property (readonly, nonatomic) BOOL deterministicMode;
@property (readonly, nonatomic) BOOL ignoreURLLimitation;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;
+ (BOOL)shouldRunCameraOrScannerPerformanceTestingMode;

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)prepare:(BOOL)a0;
- (double)requiredTimeInterval;
- (void)setPowerUsage:(unsigned long long)a0;
- (long long)captureBehavior;
- (id)initWithIgnoreURLLimitation:(BOOL)a0;

@end
