@class NSString, GKInviteInternal, NSData, GKPlayer;

@interface GKInvite : NSObject

@property (retain) GKInviteInternal *internal;
@property (readonly, nonatomic) NSString *inviteID;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL isNearby;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, retain, nonatomic) GKPlayer *sender;
@property (readonly, nonatomic, getter=isHosted) BOOL hosted;
@property (readonly, nonatomic) unsigned long long playerGroup;
@property (readonly, nonatomic) unsigned int playerAttributes;
@property (readonly, retain, nonatomic) NSString *inviter;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)inviter;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;

@end
