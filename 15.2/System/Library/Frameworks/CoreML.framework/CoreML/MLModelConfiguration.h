@class NSDictionary, NSURL;
@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL allowBackgroundGPUComputeSetting;
@property BOOL trainWithMLCompute;
@property (nonatomic) BOOL useWatchSPIForScribble;
@property (nonatomic) BOOL allowFloat16AccumulationOnGPU;
@property BOOL allowLowPrecisionAccumulationOnGPU;
@property (nonatomic) BOOL allowBackgroundGPUCompute;
@property (retain, nonatomic) id<MTLDevice> preferredMTLDevice;
@property (retain, nonatomic) id<MTLDevice> preferredMetalDevice;
@property (nonatomic) BOOL enableTestVectorMode;
@property (retain) NSDictionary *parameters;
@property (retain) NSURL *rootModelURL;
@property (nonatomic) long long profilingOptions;
@property (nonatomic) BOOL usePreloadedKey;
@property long long computeUnits;

+ (id)defaultConfiguration;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToModelConfiguration:(id)a0;
- (id)initWithComputeUnits:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)computeUnitsToString:(long long)a0;

@end
