@interface GEOMapItemURLExtras : NSObject

+ (id)urlToPresentAction:(id)a0 present:(id)a1;
+ (id)urlToPresentDirectionsForItems:(id)a0 options:(id)a1;
+ (id)_mapItemsFromPresentAction:(id)a0 hasCurrentLocation:(BOOL *)a1 currentLocationIndex:(unsigned long long *)a2 options:(id *)a3;
+ (id)_mapItemsFromDirectionsAction:(id)a0 hasCurrentLocation:(BOOL *)a1 currentLocationIndex:(unsigned long long *)a2 options:(id *)a3;
+ (id)urlToPresentDirectionsFromCurrentLocationToMapItem:(id)a0 withOptions:(id)a1;
+ (id)mapItemsFromURL:(id)a0 hasCurrentLocation:(BOOL *)a1 currentLocationIndex:(unsigned long long *)a2 options:(id *)a3;

@end
