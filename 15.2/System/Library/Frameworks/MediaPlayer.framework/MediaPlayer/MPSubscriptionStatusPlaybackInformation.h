@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    ICMusicSubscriptionStatus *_subscriptionStatusObject;
}

@property (readonly, nonatomic, getter=isDefinitiveInformation) BOOL definitiveInformation;
@property (readonly, nonatomic) BOOL hasPlaybackCapability;
@property (readonly, nonatomic) BOOL requiresCarrierManualVerification;
@property (readonly, nonatomic) BOOL shouldUseLease;
@property (readonly, nonatomic) BOOL shouldUseAccountLessStreaming;
@property (readonly, nonatomic) BOOL shouldRequirePlaybackAuthorizationTokensForPlayback;

- (id)initWithICSubscriptionStatus:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
