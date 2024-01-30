@class NSString;

@interface HMUserInviteInformation : NSObject

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic, getter=isAdministrator) BOOL administrator;
@property (readonly, nonatomic, getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property (readonly, nonatomic) unsigned long long camerasAccessLevel;
@property (readonly, nonatomic, getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 administrator:(BOOL)a1 remoteAccess:(BOOL)a2 announceAccess:(BOOL)a3 camerasAccessLevel:(unsigned long long)a4;
- (id)initWithUser:(id)a0 administrator:(BOOL)a1 remoteAccess:(BOOL)a2;

@end
