@class ICLiveLinkIdentity, MPCPlaybackSharedListeningProperties;

@interface MPCSharedListeningPlaybackIntentTracklistToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) ICLiveLinkIdentity *identity;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
