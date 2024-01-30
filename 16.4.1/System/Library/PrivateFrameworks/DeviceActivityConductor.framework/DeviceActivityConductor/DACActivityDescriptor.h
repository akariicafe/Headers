@class NSString, DACUnknownActivityPolicy;

@interface DACActivityDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) DACUnknownActivityPolicy *policy;
@property (readonly, nonatomic, getter=isLocalOnly) BOOL localOnly;

+ (id /* block */)comparator;
+ (id)activityDescriptorWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2;
+ (id)localOnlyActivityDescriptorWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 priority:(unsigned long long)a1 policy:(id)a2 localOnly:(BOOL)a3;
- (BOOL)isEqualToActivityDescriptor:(id)a0;

@end
