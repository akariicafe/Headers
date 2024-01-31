@class NSDictionary, NSString, NSXPCConnection, NSMutableDictionary, CPRouteGuidance, NSObject, NSArray;
@protocol CPNavigationManagerDelegate, CRAccNavInfoProviding, CRNavigationService, OS_dispatch_queue;

@interface CPNavigationManager : NSObject <CRNavigationClient, CRAccNavControllerDelegate, BSInvalidatable>

@property (weak, nonatomic) id<CPNavigationManagerDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) BOOL ownershipRequested;
@property (readonly, nonatomic) BOOL ownsNavigation;
@property (nonatomic) unsigned long long owner;
@property (copy, nonatomic) NSString *lastNavigatingBundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CPRouteGuidance *routeGuidance;
@property (readonly, nonatomic) NSMutableDictionary *maneuversIndexed;
@property (readonly, nonatomic) NSMutableDictionary *laneGuidanceIndexed;
@property (readonly, nonatomic) id<CRNavigationService> navigationService;
@property (readonly, nonatomic) NSMutableDictionary *accNavControllersIndexed;
@property (nonatomic) BOOL supportsAccNav;
@property (readonly, nonatomic) unsigned char guidanceState;
@property (retain, nonatomic) NSArray *maneuvers;
@property (retain, nonatomic) NSArray *laneGuidances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRAccNavInfoProviding> routeGuidanceProviding;
@property (readonly, nonatomic) NSDictionary *maneuversProvidingIndexed;
@property (readonly, nonatomic) NSDictionary *laneGuidanceProvidingIndexed;

- (void)dealloc;
- (void)requestNavigationOwnership;
- (void)navigationOwnershipChangedTo:(unsigned long long)a0;
- (void)invalidate;
- (void)_setupConnection;
- (void)_handleConnectionReset;
- (void).cxx_destruct;
- (void)releaseNavigationOwnership;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)activeNavigationIdentifiersChangedTo:(id)a0;
- (double)_connectionRetryDelay;
- (void)_enumerateNavControllersWithBlock:(id /* block */)a0;
- (void)_resendInfo;
- (void)_resetRouteGuidanceIsRequired:(BOOL)a0;
- (void)addLaneGuidances:(id)a0;
- (void)addManeuvers:(id)a0;
- (void)didUpdateActiveComponents:(id)a0;
- (void)modifyRouteGuidance:(id /* block */)a0;
- (void)resetRouteGuidance;
- (void)sendInfo:(id)a0 toComponentUID:(id)a1;

@end
