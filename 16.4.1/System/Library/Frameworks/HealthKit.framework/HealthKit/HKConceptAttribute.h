@class NSString, NSNumber;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) long long longLongValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 boolValue:(BOOL)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 numberValue:(id)a1;
- (id)initWithType:(long long)a0 value:(id)a1 version:(long long)a2 deleted:(BOOL)a3;

@end
