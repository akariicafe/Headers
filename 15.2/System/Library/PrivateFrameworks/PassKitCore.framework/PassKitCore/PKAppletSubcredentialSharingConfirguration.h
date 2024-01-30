@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (copy, nonatomic) NSArray *supportedEntitlements;
@property (nonatomic) BOOL sharingRequiresPassword;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)supportedEntitlementWithValue:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
