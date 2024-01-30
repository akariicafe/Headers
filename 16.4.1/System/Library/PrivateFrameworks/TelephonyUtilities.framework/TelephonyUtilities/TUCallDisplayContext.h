@class NSString, NSPersonNameComponents, NSArray;

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *suggestedName;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSString *callDirectoryLabel;
@property (copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *callDirectoryExtensionIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) int legacyAddressBookIdentifier;
@property (readonly, copy, nonatomic) NSString *firstName;

- (void)setFirstName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)displayContextByMergingWithDisplayContext:(id)a0;

@end
