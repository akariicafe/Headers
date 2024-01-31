@class NSDate;

@interface CLKRelativeDateProgressProvider : CLKProgressProvider

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;
+ (id)relativeDateProgressProviderWithStartDate:(id)a0 endDate:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (BOOL)_needsUpdates;
- (double)_progressFractionForNow:(id)a0;

@end
