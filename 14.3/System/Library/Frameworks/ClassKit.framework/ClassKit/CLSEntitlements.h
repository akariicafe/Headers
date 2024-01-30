@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (id)allowedEntitlements;
+ (BOOL)isSearchEnabledProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (BOOL)isInternalProcess;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;

- (BOOL)isInternal;
- (BOOL)isDashboardAPIEnabled;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)hasEntitlement:(id)a0;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (id)initWithEntitlements:(id)a0;
- (BOOL)isPrivateSearchAPIEnabled;

@end
