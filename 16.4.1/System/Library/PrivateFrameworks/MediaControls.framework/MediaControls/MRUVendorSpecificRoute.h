@class MPAVRoute, NSArray, NSMutableDictionary, UIImage, NSString, DADevice;

@interface MRUVendorSpecificRoute : MPAVRoute

@property (retain, nonatomic) NSMutableDictionary *subrouteMap;
@property (readonly, nonatomic) BOOL isGroup;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL shouldBeDisplayed;
@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) DADevice *device;
@property (readonly, nonatomic) UIImage *protocolIcon;
@property (readonly, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) NSString *protocolIdentifier;
@property (readonly, nonatomic) NSArray *subroutes;
@property (readonly, nonatomic) MRUVendorSpecificRoute *preferredSubroute;
@property (nonatomic) BOOL isPicked;
@property (readonly, nonatomic) long long vendorSpecificRouteType;
@property (retain, nonatomic) MPAVRoute *underlyingNativeRoute;
@property (nonatomic) BOOL isPreferredRoute;

- (long long)routeType;
- (id)initWithDevice:(id)a0;
- (BOOL)isKnown;
- (BOOL)supportsAirPlayGrouping;
- (id)routeUID;
- (long long)routeSubtype;
- (id)routeName;
- (BOOL)isAirPlayRoute;
- (void).cxx_destruct;
- (BOOL)isDisplayedAsPicked;
- (void)addSubRoute:(id)a0;
- (long long)moreCapableTypeBetween:(long long)a0 otherType:(long long)a1;

@end
