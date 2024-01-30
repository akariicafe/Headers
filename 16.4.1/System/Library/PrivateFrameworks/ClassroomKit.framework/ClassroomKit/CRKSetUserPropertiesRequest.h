@class NSString, DMFControlGroupIdentifier, NSData, NSNumber;

@interface CRKSetUserPropertiesRequest : CATTaskRequest

@property (copy, nonatomic) NSString *userIdentifier;
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *userSource;
@property (copy, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSNumber *useMeCardIfAvailable;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUser:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
