@class NSTimeZone, NSDate;

@interface REDateContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long units;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)dateContentProviderWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
