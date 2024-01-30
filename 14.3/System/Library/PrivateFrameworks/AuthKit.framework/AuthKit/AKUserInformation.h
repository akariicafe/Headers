@class NSString, NSArray, NSDictionary, NSNumber;

@interface AKUserInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *forwardingEmail;
@property (copy, nonatomic) NSString *previouslySelectedEmail;
@property (copy, nonatomic) NSString *primaryEmailAddress;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSArray *accountAliases;
@property (copy, nonatomic) NSArray *reachableEmails;
@property (copy, nonatomic) NSString *authorizedApplicationsListVersion;
@property (copy, nonatomic) NSString *masterKeyID;
@property (copy, nonatomic) NSNumber *vettedPrimaryEmail;
@property (copy, nonatomic) NSNumber *phoneAsAppleID;
@property (copy, nonatomic) NSNumber *isUnderage;
@property (copy, nonatomic) NSString *ageOfMajority;
@property (copy, nonatomic) NSNumber *isLegacyStudent;
@property (copy, nonatomic) NSNumber *hasUsedAuthorization;
@property (copy, nonatomic) NSNumber *previouslyWantedPrivateEmail;
@property (nonatomic) unsigned long long appleIDSecurityLevel;
@property (nonatomic) unsigned long long authMode;
@property (nonatomic) unsigned long long repairState;
@property (copy, nonatomic) NSString *selectedEmail;
@property (copy, nonatomic) NSDictionary *additionalInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithResponseBody:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
