@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {
    CLSPlace *_place;
}

@property (nonatomic) unsigned long long numberOfAssets;

+ (id)clueWithLocation:(id)a0;
+ (id)cluesWithLocations:(id)a0;

- (id)place;
- (double)gpsHorizontalAccuracy;
- (id)description;
- (void).cxx_destruct;
- (id)projectedLocation;
- (void)setPlace:(id)a0;
- (id)region;
- (id)placemark;
- (id)location;
- (BOOL)isDefinite;
- (BOOL)isEqualToClue:(id)a0;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (id)regionInPlacemark;
- (struct CLLocationCoordinate2D { double x0; double x1; })closestCoordinates;

@end
