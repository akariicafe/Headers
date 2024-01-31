@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)allowedEntitlements;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (BOOL)isSearchEnabledProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isInternalProcess;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;

- (id)init;
- (BOOL)isInDevelopmentEnvironment;
- (id)initWithEntitlements:(id)a0;
- (BOOL)isInternal;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isSearchAPIEnabled;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isDashboardAPIEnabled;

@end
