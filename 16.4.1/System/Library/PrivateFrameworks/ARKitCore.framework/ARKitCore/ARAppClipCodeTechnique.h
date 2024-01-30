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

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (void)prepare:(BOOL)a0;
- (long long)captureBehavior;
- (id)initWithIgnoreURLLimitation:(BOOL)a0;
- (double)requiredTimeInterval;
- (void)setPowerUsage:(unsigned long long)a0;

@end
