@class NSString, NSArray;

@interface CAMLibrarySelectionIdentity : NSObject <CAMLibrarySelectionIdentityProtocol>

@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *emailAddress;
@property (readonly) NSArray *contactIdentifiers;

+ (id)identityWithDevice:(id)a0;
+ (id)identityWithPerson:(id)a0;
+ (id)identityWithPhotosIdentity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0 emailAddress:(id)a1 contactIdentifiers:(id)a2;

@end
