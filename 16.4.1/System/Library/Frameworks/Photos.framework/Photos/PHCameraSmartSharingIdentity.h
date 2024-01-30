@class NSString, NSArray;

@interface PHCameraSmartSharingIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *emailAddress;
@property (readonly) NSArray *contactIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0 emailAddress:(id)a1 contactIdentifiers:(id)a2;

@end
