@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *destination;

+ (id)handleWithPhoneNumber:(id)a0;
+ (id)handleWithEmailAddress:(id)a0;
+ (id)handleWithString:(id)a0;

- (id)initWithType:(long long)a0 destination:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
