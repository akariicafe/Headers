@class NSDictionary, NSURL, NSString;
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
@property (retain, nonatomic) NSString *parentModelName;
@property (nonatomic) BOOL allowsInstrumentation;
@property (copy) NSString *modelDisplayName;
@property long long computeUnits;

+ (id)defaultConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)computeUnitsToString:(long long)a0;
- (id)initWithComputeUnits:(long long)a0;
- (BOOL)isEqualToModelConfiguration:(id)a0;

@end
