@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (BOOL)isInternalProcess;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isSearchEnabledProcess;
+ (id)allowedEntitlements;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (BOOL)isPrivateSearchEnabledProcess;

- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isInternal;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isPrivateSearchAPIEnabled;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isDashboardAPIEnabled;
- (id)initWithEntitlements:(id)a0;
- (id)init;
- (BOOL)hasEntitlement:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInDevelopmentEnvironment;

@end
