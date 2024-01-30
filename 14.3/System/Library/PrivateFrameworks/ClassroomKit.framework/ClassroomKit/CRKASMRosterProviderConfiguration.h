@class NSString, CRKASMCredentialStore, NSObject;
@protocol CRKClassKitRosterRequirements;

@interface CRKASMRosterProviderConfiguration : NSObject

@property (class, readonly, nonatomic) CRKASMRosterProviderConfiguration *studentRosterConfiguration;
@property (class, readonly, nonatomic) CRKASMRosterProviderConfiguration *instructorRosterConfiguration;

@property (readonly, copy, nonatomic) NSString *userCommonNamePrefix;
@property (readonly, copy, nonatomic) NSString *trustedUserCommonNamePrefix;
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *rosterRequirements;
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, nonatomic) long long maxCourseUsersCount;
@property (readonly, nonatomic) long long maxCourseTrustedUsersCount;
@property (readonly, nonatomic) double rosterMutationTimeout;

+ (id)makeStudentClassKitFacade;
+ (id)makeStandardClassKitFacade;
+ (BOOL)currentPlatformRequiresPersonaAdoption;

- (void).cxx_destruct;
- (id)initWithUserCommonNamePrefix:(id)a0 trustedUserCommonNamePrefix:(id)a1 rosterRequirements:(id)a2 credentialStore:(id)a3 maxCourseUsersCount:(long long)a4 maxCourseTrustedUsersCount:(long long)a5 rosterMutationTimeout:(double)a6;

@end
