@class NSString;

@interface MEAddressAnnotation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long iconType;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *originatorExtensionDisplayName;

+ (id)errorWithLocalizedDescription:(id)a0;
+ (id)warningWithLocalizedDescription:(id)a0;
+ (id)successWithLocalizedDescription:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEmailAddressTokenIconType:(long long)a0 localizedDescription:(id)a1;
- (id)_iconTypeDescription;

@end
