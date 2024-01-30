@class NSString, VSVoiceAsset;

@interface VSVoiceSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *accessoryID;
@property (retain, nonatomic) VSVoiceAsset *voice;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 accessory:(id)a1 voice:(id)a2;

@end
