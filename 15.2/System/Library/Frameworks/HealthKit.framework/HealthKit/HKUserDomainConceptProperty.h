@class NSString, NSUUID, NSData, NSDate, NSNumber;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface HKUserDomainConceptProperty : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long valueType;
@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding, NSObject> value;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSDate *dateValue;
@property (readonly, copy, nonatomic) NSUUID *UUIDValue;
@property (readonly, copy, nonatomic) NSData *dataValue;

+ (id)nullPropertyWithType:(long long)a0 version:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 version:(long long)a1 value:(id)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 valueType:(long long)a3 value:(id)a4;
- (id)initWithType:(long long)a0 version:(long long)a1 integerValue:(long long)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 doubleValue:(double)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 boolValue:(BOOL)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 dateValue:(id)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 UUIDValue:(id)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 dataValue:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_valueDescription;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 version:(long long)a1 stringValue:(id)a2;

@end
