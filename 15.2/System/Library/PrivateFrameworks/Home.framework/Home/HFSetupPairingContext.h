@class HMSetupAccessoryDescription;

@interface HFSetupPairingContext : NSObject

@property (retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (nonatomic) BOOL isTrustedOrigin;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSetupAccessoryDescription:(id)a0 isTrustedOrigin:(BOOL)a1;

@end
