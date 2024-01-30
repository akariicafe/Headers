@class HMUser, NSString, NSUUID, HMHomeManager;

@interface HMIncomingHomeInvitation : HMHomeInvitation

@property (weak, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) HMUser *inviter;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;

+ (BOOL)supportsSecureCoding;
+ (id)homeInvitationsFromEncodedData:(id)a0 homeManager:(id)a1;
+ (id)homeInvitationsFromData:(id)a0 homeManager:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigure;
- (id)initWithCoder:(id)a0;
- (void)cancelInviteWithCompletionHandler:(id /* block */)a0;
- (void)_cancelInviteWithCompletionHandler:(id /* block */)a0;
- (id)initWithInvitationData:(id)a0 homeManager:(id)a1;
- (void)_acceptInviteWithCompletionHandler:(id /* block */)a0;
- (void)_acceptInviteWithPresenceAuthStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 homeManager:(id)a1;
- (void)acceptInviteWithCompletionHandler:(id /* block */)a0;
- (void)acceptInviteWithPresenceAuthStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
