@class NSString;

@interface SGSimpleMailHeaderKeyValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSimpleMailHeaderKeyValue:(id)a0;

@end
