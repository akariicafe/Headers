@class NSMutableDictionary, NSXPCConnection, NSString, NSMutableArray;
@protocol ACCNavigationXPCServerProtocol;

@interface ACCNavigationProvider : NSObject

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCNavigationXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSString *providerUID;

- (void)accessoryNavigationStartRouteGuidance:(id)a0 componentIdList:(id)a1 options:(unsigned long long)a2;
- (id)initWithDelegate:(id)a0;
- (void)accessoryNavigationObjectDetection:(id)a0 componentIdList:(id)a1 updateInfo:(id)a2;
- (void)accessoryNavigationStopRouteGuidance:(id)a0 componentIdList:(id)a1;
- (void)detachAllAccessories;
- (void)connectToServer;
- (void)routeGuidance:(id)a0 updateInfo:(id)a1 componentIdList:(id)a2;
- (void).cxx_destruct;
- (void)objectDetection:(id)a0 stopComponentIdList:(id)a1;
- (id)delegatesImplementing:(SEL)a0;
- (void)routeGuidance:(id)a0 maneuverUpdateInfo:(id)a1 componentIdList:(id)a2;
- (void)dealloc;
- (id)accessoryForUID:(id)a0;
- (void)objectDetection:(id)a0 startComponentIdList:(id)a1 objectTypes:(id)a2;
- (void)accessoryNavigationDetached:(id)a0;
- (void)accessoryNavigationAttached:(id)a0 componentList:(id)a1;
- (void)routeGuidance:(id)a0 laneGuidanceInfo:(id)a1 componentIdList:(id)a2;

@end
