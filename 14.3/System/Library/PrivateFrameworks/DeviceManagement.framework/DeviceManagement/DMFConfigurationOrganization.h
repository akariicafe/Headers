@class NSString, NSArray;

@interface DMFConfigurationOrganization : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSArray *registeredConfigurationSources;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
