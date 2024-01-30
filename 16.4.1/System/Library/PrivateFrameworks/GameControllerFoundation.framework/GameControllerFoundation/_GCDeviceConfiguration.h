@class NSDictionary, NSArray;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCDeviceConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long priority;
@property (readonly, getter=isTransient) BOOL transient;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> deviceIdentifier;
@property (readonly, copy) NSArray *deviceDependencies;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> deviceBuilderIdentifier;

+ (id)configurationWithIdentifier:(id)a0 priority:(unsigned long long)a1 deviceIdentifier:(id)a2 deviceDependencies:(id)a3 deviceBuilder:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)valueForAttribute:(id)a0;
- (id)_initWithIdentifier:(id)a0 attributes:(id)a1;

@end
