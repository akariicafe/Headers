@class HMUserCameraAccess, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl

@property (getter=isOwner) BOOL owner;
@property (nonatomic, getter=isAdministrator) BOOL administrator;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (retain, nonatomic) HMUserCameraAccess *camerasAccess;
@property (getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;

- (void).cxx_destruct;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithUser:(id)a0 owner:(BOOL)a1 administratorPrivilege:(BOOL)a2 remoteAccess:(BOOL)a3 presenceAuthStatus:(id)a4 presenceComputeStatus:(id)a5 announceAccess:(BOOL)a6 camerasAccess:(id)a7;
- (unsigned long long)camerasAccessLevel;
- (void)updateAdministratorAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateRemoteAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateCamerasAccessLevel:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateAnnounceAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;

@end
