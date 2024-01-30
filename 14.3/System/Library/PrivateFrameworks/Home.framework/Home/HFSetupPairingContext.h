@class HMSetupAccessoryDescription;
@protocol HMSetupRemoteService;

@interface HFSetupPairingContext : NSObject

@property (retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (weak, nonatomic) id<HMSetupRemoteService> setupRemoteService;
@property (nonatomic) BOOL isTrustedOrigin;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSetupAccessoryDescription:(id)a0 setupRemoteService:(id)a1 isTrustedOrigin:(BOOL)a2;

@end
