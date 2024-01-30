@class NSDictionary;

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long classifyTopK;
@property BOOL useCPUOnly;
@property (copy, nonatomic) NSDictionary *outputBackings;
@property (copy, nonatomic) NSDictionary *automaticOutputBackingMode;
@property unsigned long long maxComputationBatchSize;
@property (nonatomic) BOOL usesCPUOnly;

+ (id)defaultOptions;

- (id)init;
- (id)initWithUsesCPUOnly:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCPUOnly:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
