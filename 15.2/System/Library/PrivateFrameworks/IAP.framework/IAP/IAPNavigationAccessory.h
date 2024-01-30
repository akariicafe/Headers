@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDict:(id)a0;
- (unsigned long long)hash;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
