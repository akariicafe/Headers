@class NSString, NSDictionary, CLSPerson;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *magicValue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int devMode;
@property (retain, nonatomic) CLSPerson *person;
@property (copy, nonatomic) NSString *personaUniqueString;
@property (copy, nonatomic) NSString *clientPersonaUniqueString;
@property (nonatomic) BOOL hasDataSeparatedAccount;
@property (nonatomic) BOOL hasMatchingPersona;
@property (nonatomic) unsigned long long roles;
@property (retain, nonatomic) NSDictionary *locationIDsByAXMRoleType;
@property (nonatomic) BOOL hasEDUAccount;
@property (copy, nonatomic) NSString *organizationName;
@property (nonatomic) BOOL organizationProgressTrackingAllowed;
@property (nonatomic) long long catalogEnvironment;
@property (nonatomic) int rosterServiceAuthenticationState;
@property (nonatomic) int handoutServiceAuthenticationState;
@property (readonly, nonatomic) BOOL isAdministrator;
@property (readonly, nonatomic) BOOL isInstructor;
@property (readonly, nonatomic) BOOL isStudent;

+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)hasRole:(unsigned long long)a0;
- (id)_init;
- (BOOL)_hasRole:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)_useRoles;

@end
