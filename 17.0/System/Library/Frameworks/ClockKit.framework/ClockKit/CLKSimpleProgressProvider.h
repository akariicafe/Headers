@interface CLKSimpleProgressProvider : CLKProgressProvider

@property (nonatomic) double progress;

+ (BOOL)supportsSecureCoding;
+ (id)simpleProgressProviderWithProgress:(double)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (BOOL)_needsUpdates;
- (double)_progressFractionForNow:(id)a0;

@end
