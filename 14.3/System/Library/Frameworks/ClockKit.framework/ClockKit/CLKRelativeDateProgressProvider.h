@class NSDate;

@interface CLKRelativeDateProgressProvider : CLKProgressProvider

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;
+ (id)relativeDateProgressProviderWithStartDate:(id)a0 endDate:(id)a1;

- (void).cxx_destruct;
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
