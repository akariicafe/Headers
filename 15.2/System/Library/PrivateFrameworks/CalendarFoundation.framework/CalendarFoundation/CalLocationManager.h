@interface CalLocationManager : NSObject

+ (id)placemarkForLocation:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (id)placemarkForAddress:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)_loadMapKit;
+ (id)currentLocationWithCompletionBlock:(id /* block */)a0;
+ (BOOL)isCurrentProcessEntitledToUseLocationServices;
+ (id)strictGeocodeString:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
