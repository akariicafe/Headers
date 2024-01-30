@class NSUUID;

@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) BOOL isDefault;

+ (id)defaultInstanceIdentifier;

- (BOOL)isDefault;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualInstanceIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
