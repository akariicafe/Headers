@interface DenoiseRemixStageConfig : NSObject

@property (nonatomic) int lgaAlgorithm;
@property (nonatomic) BOOL enableBandZeroDenoising;
@property (nonatomic) BOOL enableNoiseMap;

+ (id)releaseSharedInstance;
+ (id)getSharedInstance;
+ (id)getOrRelease:(BOOL)a0;

- (id)_initWithLGAAlgorithm:(int)a0 enableBandZeroDenoising:(BOOL)a1 enableNoiseMap:(BOOL)a2;

@end
