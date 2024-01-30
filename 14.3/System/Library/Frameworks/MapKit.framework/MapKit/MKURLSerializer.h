@interface MKURLSerializer : NSObject

+ (id)stringForMapType:(unsigned long long)a0;
+ (id)stringForDirectionsType:(unsigned long long)a0;

- (id)mapItemsFromUrl:(id)a0 options:(id *)a1;
- (id)urlForDirectionsFromMapItem:(id)a0 toMapItem:(id)a1 transportType:(unsigned long long)a2 options:(id)a3;
- (id)urlForOpeningMapItems:(id)a0 options:(id)a1;

@end
