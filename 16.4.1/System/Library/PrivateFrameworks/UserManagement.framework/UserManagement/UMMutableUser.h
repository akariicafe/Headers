@class NSString, NSArray, NSURL, NSDate, NSError;

@interface UMMutableUser : UMUser

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSURL *homeDirectoryURL;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *photoURL;
@property (copy, nonatomic) NSString *userAuxiliaryString;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastLoginDate;
@property (copy, nonatomic) NSDate *lastRemoteAuthDate;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic) BOOL isLoginUser;
@property (nonatomic) BOOL isAuditor;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isTransientUser;
@property (nonatomic) BOOL isPrimaryUser;
@property (nonatomic) BOOL isAdminUser;
@property (nonatomic) unsigned long long passcodeLockGracePeriod;
@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) BOOL hasManagedCredentials;
@property (nonatomic) unsigned long long dataQuota;
@property (nonatomic) unsigned long long dataUsed;
@property (nonatomic) BOOL hasDataToSync;
@property (retain, nonatomic) NSError *errorCausingLogout;

- (BOOL)commitChangesWithError:(id *)a0;
- (BOOL)commitChanges;

@end
