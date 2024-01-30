@interface CLKSimpleProgressProvider : CLKProgressProvider

@property (nonatomic) double progress;

+ (BOOL)supportsSecureCoding;
+ (id)simpleProgressProviderWithProgress:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (void)_validate;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (double)_progressFractionForNow:(id)a0;
- (BOOL)_needsUpdates;

@end
