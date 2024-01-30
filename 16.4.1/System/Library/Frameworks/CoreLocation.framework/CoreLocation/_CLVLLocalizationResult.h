@class _CLVLLocalizationDebugInfo;

@interface _CLVLLocalizationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ coordinate; double horizontalAccuracy; } location;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) struct { float v[6][6]; } covariance;
@property (nonatomic) float confidence;
@property (copy, nonatomic) _CLVLLocalizationDebugInfo *debugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (id)initWithTimestamp:(double)a0 localizationResult:(id)a1;

@end
