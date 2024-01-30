@class NSArray, NSDictionary;

@interface MRURoutingViewControllerUpdate : NSObject

@property (copy, nonatomic) NSArray *pickedRoutes;
@property (copy, nonatomic) NSArray *pendingPickedRoutes;
@property (copy, nonatomic) NSArray *displayableAvailableRoutes;
@property (copy, nonatomic) NSArray *displayAsPickedRoutes;
@property (copy, nonatomic) NSArray *volumeCapableRoutes;
@property (copy, nonatomic) NSArray *airPlayRoutes;
@property (copy, nonatomic) NSArray *nativeRoutes;
@property (copy, nonatomic) NSArray *nativeRoutesInVendorSpecificGroup;
@property (copy, nonatomic) NSArray *activatedVendorSpecificDeviceIDs;
@property (copy, nonatomic) NSArray *pendingVendorSpecificDeviceIDs;
@property (copy, nonatomic) NSDictionary *routeGrouping;
@property (nonatomic) BOOL canGroup;
@property (nonatomic) BOOL hasPendingPickedRoutes;
@property (nonatomic) BOOL shouldReload;

- (void).cxx_destruct;

@end
