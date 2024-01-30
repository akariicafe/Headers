@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long valueType;
@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding, NSObject> value;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) long long longLongValue;

+ (id)attributeWithIdentifier:(long long)a0 type:(long long)a1 valueType:(long long)a2 value:(id)a3;
+ (id)attributeWithIdentifier:(long long)a0 type:(long long)a1 stringValue:(id)a2;
+ (id)attributeWithIdentifier:(long long)a0 type:(long long)a1 numberValue:(id)a2;
+ (id)attributeWithIdentifier:(long long)a0 type:(long long)a1 boolValue:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0 type:(long long)a1 valueType:(long long)a2 value:(id)a3;
- (unsigned long long)hash;

@end
