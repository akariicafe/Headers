@class NSData;

@interface SESPeerIdentity : NSObject

@property (readonly) NSData *peerIdentifier;
@property (readonly) NSData *peerData;

+ (id)withOTPeerIdentity:(id)a0;
+ (id)withPeerIdentifier:(id)a0 peerData:(id)a1;

- (void).cxx_destruct;
- (id)asOTPeerIdentity;

@end
