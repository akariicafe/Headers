@interface HMDMPCAssistantRemoteControlDestinationFactory : NSObject <HMDMPCAssistantRemoteControlDestinationFactory>

- (id)nowPlayingApplicationDestination;
- (id)systemMediaApplicationDestination;
- (id)mutableCopyForMPCDestination:(id)a0;
- (void)resolveMPCDestination:(id)a0 withHashedRouteIdentifiers:(id)a1 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a2 completion:(id /* block */)a3;

@end
