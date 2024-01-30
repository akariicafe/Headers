@class NSString, NSArray, NSURL, NSDate, NSError;

@interface UMUser : NSObject <NSCopying, NSMutableCopying> {
    NSString *_displayName;
}

@property (nonatomic) BOOL shouldFetchAttributes;
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
@property (copy, nonatomic) id _photo;
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
@property (copy, nonatomic) NSError *debugErrorCausingLogout;
@property (copy, nonatomic) NSDate *firstLoginStartDate;
@property (copy, nonatomic) NSDate *firstLoginEndDate;
@property (copy, nonatomic) NSDate *lastCachedLoginStartDate;
@property (copy, nonatomic) NSDate *lastCachedLoginEndDate;
@property (copy, nonatomic) NSDate *lastLogoutStartDate;
@property (copy, nonatomic) NSDate *lastLogoutEndDate;
@property (readonly, weak, nonatomic) NSArray *allUserPersonas;
@property (readonly, nonatomic) unsigned long long userType;
@property (readonly, nonatomic) double passcodeBackOffInterval;

+ (id)userWithUID:(unsigned int)a0;

- (id)userPersonaFromIdentityString:(id)a0;
- (void)fetchAttributesIfNeeded;
- (void)setPropertiesFromUser:(id)a0;
- (BOOL)inFirstLoginSession;
- (BOOL)fetchAttributesWithOutError:(id *)a0;
- (BOOL)commitChangesWithError:(id *)a0;
- (struct dqblk { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9[4]; })_diskQuota;
- (BOOL)commitChanges;
- (BOOL)isEqualToUser:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
