@class NSDictionary;

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long parentSignpostID;
@property unsigned long long classifyTopK;
@property (readonly, nonatomic) BOOL predictionUsesCPU;
@property (copy, nonatomic) NSDictionary *automaticOutputBackingMode;
@property unsigned long long maxComputationBatchSize;
@property (nonatomic) BOOL enablePixelBufferDirectBinding;
@property (nonatomic) BOOL usesCPUOnly;
@property (copy, nonatomic) NSDictionary *outputBackings;

+ (id)defaultOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUsesCPUOnly:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
