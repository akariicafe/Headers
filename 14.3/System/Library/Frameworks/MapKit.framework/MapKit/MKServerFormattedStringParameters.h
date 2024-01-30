@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { BOOL abbreviatedUnits; long long distanceDetailLevel; BOOL spoken; BOOL dropTimestampAMPM; BOOL rightToLeft; double referenceDate; } options;
@property (readonly, copy, nonatomic) NSDictionary *variableOverides;

- (void).cxx_destruct;
- (id)initWithOptions:(struct { BOOL x0; long long x1; BOOL x2; BOOL x3; BOOL x4; double x5; })a0 variableOverrides:(id)a1;
- (BOOL)isEqualToServerFormattedStringParameters:(id)a0;
- (id)initWithInstructionsDistanceDetailLevel:(long long)a0 variableOverrides:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
