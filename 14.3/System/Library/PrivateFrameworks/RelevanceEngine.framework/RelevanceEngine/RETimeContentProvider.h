@class NSTimeZone, NSDate;

@interface RETimeContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)timeContentProviderWithDate:(id)a0 timeZone:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
