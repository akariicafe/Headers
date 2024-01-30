@class VLLocalizationDebugInfo;

@interface VLLocalizationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) double inputTimestamp;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ coordinate; double horizontalAccuracy; } location;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) struct { float v[6][6]; } covariance;
@property (readonly, nonatomic) VLLocalizationDebugInfo *debugInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTimestamp:(double)a0 pose:(const struct { double x0[3][3]; double x1[3]; float x2; float x3[36]; } *)a1 debugInfo:(id)a2;

@end
