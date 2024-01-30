@class NSData;

@interface SESPeerIdentity : NSObject

@property (readonly) NSData *peerIdentifier;
@property (readonly) NSData *peerData;

+ (id)withPeerIdentifier:(id)a0 peerData:(id)a1;
+ (id)withOTPeerIdentity:(id)a0;

- (void).cxx_destruct;
- (id)asOTPeerIdentity;

@end
