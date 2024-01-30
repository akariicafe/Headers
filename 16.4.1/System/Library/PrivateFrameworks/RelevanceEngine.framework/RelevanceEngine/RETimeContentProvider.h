@class NSTimeZone, NSDate;

@interface RETimeContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)timeContentProviderWithDate:(id)a0 timeZone:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
