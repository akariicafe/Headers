@class NSString, NSNumber;

@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCAdamID *invalidAdamID;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) long long int64value;

- (id)initWithInt64:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumberValue:(id)a0;
- (id)initWithStringValue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
