@class NSString;

@interface DIIdentityElement : NSObject <NSCopying>

@property (class, readonly) DIIdentityElement *givenNameElement;
@property (class, readonly) DIIdentityElement *familyNameElement;
@property (class, readonly) DIIdentityElement *portraitElement;
@property (class, readonly) DIIdentityElement *addressElement;
@property (class, readonly) DIIdentityElement *issuingAuthorityElement;
@property (class, readonly) DIIdentityElement *documentIssueDateElement;
@property (class, readonly) DIIdentityElement *documentExpirationDateElement;
@property (class, readonly) DIIdentityElement *documentNumberElement;
@property (class, readonly) DIIdentityElement *drivingPrivilegesElement;
@property (class, readonly) DIIdentityElement *ageElement;
@property (class, readonly) DIIdentityElement *dateOfBirthElement;

@property (readonly, retain) NSString *identifier;

+ (id)ageThresholdElementWithAge:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
