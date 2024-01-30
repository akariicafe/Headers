@interface NCLocationUpdateDemoDelegate : NCLocationUpdateBaseDelegate {
    unsigned long long _locationToken;
}

- (void)stopLocationUpdatesForToken:(id)a0;
- (id)getAltitude;
- (id)getLocation;
- (id)startLocationUpdatesWithHandler:(id /* block */)a0;
- (void)startLocationUpdatesWithAccuracy:(double)a0;

@end
