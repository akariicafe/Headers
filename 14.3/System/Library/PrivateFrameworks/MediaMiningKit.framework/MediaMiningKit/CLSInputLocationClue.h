@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {
    CLSPlace *_place;
}

+ (id)clueWithLocation:(id)a0;
+ (id)cluesWithLocations:(id)a0;

- (id)place;
- (id)region;
- (void).cxx_destruct;
- (double)gpsHorizontalAccuracy;
- (id)location;
- (id)description;
- (id)placemark;
- (void)setPlace:(id)a0;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (BOOL)isEqualToClue:(id)a0;
- (id)projectedLocation;
- (BOOL)isDefinite;
- (id)regionInPlacemark;
- (struct CLLocationCoordinate2D { double x0; double x1; })closestCoordinates;

@end
