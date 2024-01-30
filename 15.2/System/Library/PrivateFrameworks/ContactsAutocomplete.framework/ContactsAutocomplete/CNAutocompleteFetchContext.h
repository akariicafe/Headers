@class NSString, NSArray, NSDate;

@interface CNAutocompleteFetchContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *sendingAddress;
@property (copy) NSString *sendingAddressAccountIdentifier;
@property (copy) NSString *domainIdentifier;
@property (copy) NSArray *relatedContacts;
@property (copy) NSArray *otherAddressesAlreadyChosen;
@property (copy) NSDate *date;
@property (copy) NSString *locationUUID;
@property (copy) NSString *title;
@property (copy) NSArray *bundleIdentifiers;
@property BOOL predictsBasedOnOutgoingInteraction;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
