@interface AFPowerContextPolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct AFPowerContext { unsigned long long cpuContext; unsigned long long aneContext; unsigned long long gpuContext; } asrAssistantPolicy;
@property (readonly, nonatomic) struct AFPowerContext { unsigned long long cpuContext; unsigned long long aneContext; unsigned long long gpuContext; } asrDictationPolicy;
@property (readonly, nonatomic) struct AFPowerContext { unsigned long long cpuContext; unsigned long long aneContext; unsigned long long gpuContext; } ttsPolicy;
@property (readonly, nonatomic) unsigned long long thermalMitigationLevel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)encodePolicy;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 asrDictationPolicy:(struct AFPowerContext { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 ttsPolicy:(struct AFPowerContext { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 asrDictationPolicy:(struct AFPowerContext { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 ttsPolicy:(struct AFPowerContext { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 thermalMitigationLevel:(unsigned long long)a3;
- (id)initWithEncodedPolicy:(unsigned long long)a0;

@end
