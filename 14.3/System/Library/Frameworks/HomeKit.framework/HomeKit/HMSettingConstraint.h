@class NSUUID;
@protocol NSSecureCoding, NSCopying;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly, copy) id<NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (id)supportedValueClasses;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (id)initWithType:(long long)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
