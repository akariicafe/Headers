@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPresenceByUserId:(id)a0;
- (id)initWithPresenceByPairingIdentity:(id)a0;
- (BOOL)areUsersNotAtHome:(id)a0;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)isNoUserAtHome;
- (BOOL)isAnyUserAtHome;
- (BOOL)isUserNotAtHome:(id)a0;
- (BOOL)isUserAtHome:(id)a0;
- (id)regionForUser:(id)a0;

@end
