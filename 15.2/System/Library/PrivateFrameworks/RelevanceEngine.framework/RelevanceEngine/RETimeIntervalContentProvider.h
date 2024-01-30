@class NSTimeZone, NSDate;

@interface RETimeIntervalContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)timeIntervalContentProviderWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
