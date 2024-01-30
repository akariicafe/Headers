@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (BOOL)isPrivateSearchEnabledProcess;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isSearchEnabledProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isInternalProcess;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)allowedEntitlements;

- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isInternal;
- (id)initWithEntitlements:(id)a0;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isDashboardAPIEnabled;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isPrivateSearchAPIEnabled;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isInDevelopmentEnvironment;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isRegisterDashboardEnabled;

@end
