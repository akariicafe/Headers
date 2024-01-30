@interface ICSDateTimeValue : ICSDateValue <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long hour;
@property (readonly) long long minute;
@property (readonly) long long second;

- (id)components;
- (void)encodeWithCoder:(id)a0;
- (int)dateType;
- (id)initWithCoder:(id)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;

@end
