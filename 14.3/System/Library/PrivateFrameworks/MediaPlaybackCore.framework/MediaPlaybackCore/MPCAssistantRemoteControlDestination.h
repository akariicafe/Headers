@class NSString, NSArray;

@interface MPCAssistantRemoteControlDestination : NSObject <NSMutableCopying>

@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) void *origin;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *hashedOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputGroups;
@property (readonly, nonatomic) NSString *outputGroupID;
@property (readonly, nonatomic) BOOL singleGroup;

+ (id)systemMediaApplicationDestination;
+ (id)watchRadioApplicationDestination;
+ (id)podcastsApplicationDestination;
+ (id)iBooksApplicationDestination;
+ (id)nowPlayingApplicationDestination;

- (id)init;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void *)createPlayerPath;
- (id)initWithAppBundleID:(id)a0;
- (id)initWithAppBundleID:(id)a0 playerID:(id)a1 origin:(void *)a2;
- (void)resolveWithHashedRouteIdentifiers:(id)a0 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a1 completion:(id /* block */)a2;
- (void)resolveWithQueue:(id)a0 hashedRouteIdentifiers:(id)a1 localPlaybackPermitted:(BOOL)a2 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a3 completion:(id /* block */)a4;
- (void)resolveWithRouteIdentifiers:(id)a0 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a1 completion:(id /* block */)a2;
- (void)resolveWithQueue:(id)a0 routeIdentifiers:(id)a1 localPlaybackPermitted:(BOOL)a2 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a3 completion:(id /* block */)a4;
- (void)resolveWithHashedRouteIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)resolveWithRouteIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)resolveWithQueue:(id)a0 hashedRouteIdentifiers:(id)a1 localPlaybackPermitted:(BOOL)a2 completion:(id /* block */)a3;
- (void)resolveWithQueue:(id)a0 routeIdentifiers:(id)a1 localPlaybackPermitted:(BOOL)a2 completion:(id /* block */)a3;
- (void)_getCompanionOrigin:(id /* block */)a0;

@end
