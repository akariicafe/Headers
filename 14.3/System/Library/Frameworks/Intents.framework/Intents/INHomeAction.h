@class NSString;

@interface INHomeAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 boolValue:(BOOL)a1;
- (id)initWithType:(long long)a0 doubleValue:(double)a1;
- (id)initWithType:(long long)a0 integerValue:(long long)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 valueType:(long long)a1 boolValue:(BOOL)a2 doubleValue:(double)a3 integerValue:(long long)a4 stringValue:(id)a5;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
