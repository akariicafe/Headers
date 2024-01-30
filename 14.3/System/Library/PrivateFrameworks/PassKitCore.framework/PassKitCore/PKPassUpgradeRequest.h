@class NSString, PKOSVersionRequirement, NSArray, NSDictionary;

@interface PKPassUpgradeRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKOSVersionRequirement *minimumOSVersion;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) NSArray *paymentApplicationIdentifiers;
@property (readonly, nonatomic) NSDictionary *fields;

+ (id)passUpgradeRequestFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
