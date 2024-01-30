@class NSArray;

@interface PKContactInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *postalAddresses;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *phoneNumbers;

+ (id)_keychainWrapper;
+ (id)contactInformationFromKeychain;
+ (void)saveContactInformationToKeychain:(id)a0;
+ (void)deleteContactInformationFromKeychain;

- (id)initWithKeychainData:(id)a0;
- (id)initWithPostalAddresses:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)keychainData;

@end
