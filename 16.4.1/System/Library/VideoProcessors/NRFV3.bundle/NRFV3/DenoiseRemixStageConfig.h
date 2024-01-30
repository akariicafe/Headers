@interface DenoiseRemixStageConfig : NSObject

@property (nonatomic) int lgaAlgorithm;
@property (nonatomic) BOOL enableBandZeroDenoising;
@property (nonatomic) BOOL enableNoiseMap;

+ (id)getSharedInstance;
+ (id)releaseSharedInstance;
+ (id)getOrRelease:(BOOL)a0;

- (id)_initWithLGAAlgorithm:(int)a0 enableBandZeroDenoising:(BOOL)a1 enableNoiseMap:(BOOL)a2;

@end
