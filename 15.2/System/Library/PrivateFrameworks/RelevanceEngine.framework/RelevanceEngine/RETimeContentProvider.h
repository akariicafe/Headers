@class NSTimeZone, NSDate;

@interface RETimeContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)timeContentProviderWithDate:(id)a0 timeZone:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
