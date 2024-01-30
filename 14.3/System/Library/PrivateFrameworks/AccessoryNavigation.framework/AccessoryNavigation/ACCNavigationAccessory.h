@class NSString, NSMutableDictionary, NSDictionary, ACCNavigationProvider;

@interface ACCNavigationAccessory : NSObject

@property (retain) NSMutableDictionary *componentListInternal;
@property (retain) NSMutableDictionary *objectDetectionComponentListInternal;
@property (readonly, weak, nonatomic) ACCNavigationProvider *provider;
@property (retain, nonatomic) NSString *accessoryUID;
@property (readonly) NSDictionary *componentList;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (id)componentListForIdList:(id)a0;
- (void)updateRouteGuidanceInfo:(id)a0 componentList:(id)a1;
- (void)updateManeuverInfo:(id)a0 componentList:(id)a1;
- (id)initWithAccessoryUID:(id)a0 provider:(id)a1;
- (id)objectDetectionComponentList;
- (BOOL)objectDetectionComponentIdListIsEnabled:(id)a0;
- (BOOL)componentIdListIsEnabled:(id)a0;
- (id)objectDetectionComponentListForIdList:(id)a0;
- (void)iterateComponentIdList:(id)a0 block:(id /* block */)a1;
- (BOOL)supportsExitInfoForAnyComponent;
- (void)updateLaneGuidanceInfo:(id)a0 componentList:(id)a1;

@end
