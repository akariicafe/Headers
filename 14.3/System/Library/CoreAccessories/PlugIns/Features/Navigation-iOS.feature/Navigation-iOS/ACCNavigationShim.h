@class NSString;
@protocol ACCNavigationShimProtocol;

@interface ACCNavigationShim : NSObject <ACCiAP2ShimServerDelegate>

@property (readonly) NSString *uid;
@property (weak, nonatomic) id<ACCNavigationShimProtocol> delegate;

- (void).cxx_destruct;
- (void)accessoryDetached:(id)a0;
- (void)dealloc;
- (id)getUID;
- (void)accessoryAttached:(id)a0;
- (id)description;
- (id)initWithDelegate:(id)a0;
- (BOOL)tryProcessXPCMessage:(id)a0 connection:(id)a1 server:(id)a2;
- (id)convertIAP2ACCRouteGuidanceInfo:(id)a0 forAccessory:(id)a1;
- (id)convertIAP2ACCManeuverInfo:(id)a0 forAccessory:(id)a1;
- (void)accessoryNavigation:(id)a0 updateRouteGuidanceInfo:(id)a1;
- (void)accessoryNavigation:(id)a0 updateManeuverInfo:(id)a1;
- (void)accessoryStartRouteGuidance:(id)a0 componentList:(id)a1;
- (void)accessoryStopRouteGuidance:(id)a0 componentList:(id)a1;

@end
