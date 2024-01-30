@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
