@class NSString, NSMutableSet;

@interface DSApp : NSObject <NSMutableCopying>

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) NSMutableSet *permissionsGranted;
@property (nonatomic) unsigned long long locationAuthorization;

+ (BOOL)app:(id)a0 hasPermission:(id)a1;
+ (BOOL)app:(id)a0 hasPermissionAcceptingAnyLocationAuthorization:(id)a1;
+ (BOOL)appHasNoPermissions:(id)a0;
+ (BOOL)skipTCCCheck:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasLocationAccess;

@end
