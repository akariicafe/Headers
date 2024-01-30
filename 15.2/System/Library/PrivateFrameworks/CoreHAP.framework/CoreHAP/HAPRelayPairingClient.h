@class NSURL;
@protocol HAPRelayPairingClientDelegate;

@interface HAPRelayPairingClient : HMFObject

@property (weak) id<HAPRelayPairingClientDelegate> delegate;
@property (readonly, nonatomic) NSURL *accessoryBagURL;

- (void)close;
- (void)open;
- (void).cxx_destruct;
- (void)requestControllerIdentifier;
- (void)requestAccessTokenForAccessoryIdentifier:(id)a0 pairingToken:(id)a1;

@end
