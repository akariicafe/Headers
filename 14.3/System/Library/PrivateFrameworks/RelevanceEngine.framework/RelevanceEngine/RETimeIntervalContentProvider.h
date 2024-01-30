@class NSTimeZone, NSDate;

@interface RETimeIntervalContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)timeIntervalContentProviderWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
