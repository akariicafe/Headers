@class NSArray;

@interface PLAssetsdServicePermissions : NSObject <NSCopying>

@property (nonatomic) long long requiredAuthorization;
@property (nonatomic) BOOL allowsAuthorizationWithPhotoKitEntitlement;
@property (copy, nonatomic) NSArray *requiredEntitlements;

- (id)_verifyAuthorizationWithContext:(id)a0;
- (BOOL)_isAuthorizedForWriteOnlyWithContext:(id)a0;
- (void)refreshCachedAuthorizationsWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isAuthorizedViaTCCWithContext:(id)a0;
- (id)initWithPermissions:(id)a0;
- (id)_errorForMissingEntitlements:(id)a0 withContext:(id)a1;
- (id)_verifyEntitlementsWithContext:(id)a0;
- (BOOL)_isAuthorizedForReadWriteWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)a0;
- (id)verifyPermissionsWithContext:(id)a0;

@end
