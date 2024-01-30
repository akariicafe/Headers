@class CKRecordID, NSString, NSDictionary, CLSPerson, NSURL, NSError, NSData;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {
    BOOL _hasSecurityScopedSchoolworkUbiquitousContainerURL;
    BOOL _hasSecurityScopedMultimediaCacheDirectoryURL;
}

@property (class, readonly, nonatomic) NSString *magicValue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int devMode;
@property (retain, nonatomic) CLSPerson *person;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountPersonaUniqueIdentifier;
@property (copy, nonatomic) NSString *clientPersonaUniqueIdentifier;
@property (nonatomic) BOOL hasDataSeparatedAccount;
@property (nonatomic) BOOL requiresPersonaMatch;
@property (nonatomic) BOOL hasMatchingPersona;
@property (nonatomic) unsigned long long roles;
@property (retain, nonatomic) NSDictionary *locationIDsByAXMRoleType;
@property (nonatomic) BOOL hasManagedAccount;
@property (nonatomic) BOOL hasEDUAccount;
@property (copy, nonatomic) NSString *organizationName;
@property (nonatomic) BOOL organizationProgressTrackingAllowed;
@property (nonatomic) BOOL organizationMaidAnalyticsEnabled;
@property (nonatomic) BOOL personMaidAnalyticsEnabled;
@property (nonatomic) long long catalogEnvironment;
@property (nonatomic) int rosterServiceAuthenticationState;
@property (nonatomic) int handoutServiceAuthenticationState;
@property (nonatomic) int iCloudDriveAuthenticationState;
@property (nonatomic) BOOL hasUbiquityEnabled;
@property (copy, nonatomic) NSURL *schoolworkUbiquitousContainerURL;
@property (copy, nonatomic) NSError *schoolworkUbiquitousContainerError;
@property (copy, nonatomic) NSData *schoolworkUbiquitousContainerURLSandboxExtension;
@property (retain, nonatomic) CKRecordID *orgAdminUserRecordID;
@property (copy, nonatomic) NSError *orgAdminUserFetchError;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (copy, nonatomic) NSError *userFetchError;
@property (copy, nonatomic) NSURL *multimediaCacheDirectoryURL;
@property (copy, nonatomic) NSError *multimediaCacheDirectoryURLError;
@property (copy, nonatomic) NSData *multimediaCacheDirectoryURLSandboxExtension;
@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (readonly, copy, nonatomic) NSString *clientPersonaUniqueString;
@property (readonly, nonatomic) BOOL isAdministrator;
@property (readonly, nonatomic) BOOL isInstructor;
@property (readonly, nonatomic) BOOL isStudent;

+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_hasRole:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)_useRoles;
- (BOOL)hasRole:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
