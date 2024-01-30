@interface CLKSimpleProgressProvider : CLKProgressProvider

@property (nonatomic) double progress;

+ (BOOL)supportsSecureCoding;
+ (id)simpleProgressProviderWithProgress:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_validate;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)JSONObjectRepresentation;
- (double)_progressFractionForNow:(id)a0;
- (BOOL)_needsUpdates;

@end
