@interface ICSDateValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long year;
@property (readonly) long long month;
@property (readonly) long long day;

+ (id)dateFromICSString:(id)a0;
+ (id)dateFromICSUTF8String:(const char *)a0;

- (id)components;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (int)dateType;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (id)icsString;

@end
