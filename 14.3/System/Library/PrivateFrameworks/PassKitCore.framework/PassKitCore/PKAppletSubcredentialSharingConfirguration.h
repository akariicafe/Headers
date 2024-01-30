@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (copy, nonatomic) NSArray *supportedEntitlements;
@property (nonatomic) BOOL sharingRequiresPassword;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)supportedEntitlementWithValue:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
