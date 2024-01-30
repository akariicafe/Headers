@class NSTimeZone, NSDate;

@interface REDateContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long units;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)dateContentProviderWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 units:(unsigned long long)a1 timeZone:(id)a2;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
