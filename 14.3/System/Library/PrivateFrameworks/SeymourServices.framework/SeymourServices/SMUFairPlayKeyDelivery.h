@interface SMUFairPlayKeyDelivery : NSObject <SMUFairPlayKeyDelivering>

- (id)remoteServerPlaybackContextForCertificate:(id)a0 error:(id *)a1;
- (id)serverPlaybackContextForPlaybackContext:(id)a0 remoteContextIdentifier:(unsigned int)a1 error:(id *)a2;

@end
