@interface WeatherMaps.MapKitDynamicTileOverlay : _MKDynamicTileOverlay {
    void /* unknown type, empty encoding */ overlayDescriptor;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ overlayRenderer;
    void /* unknown type, empty encoding */ timeConfiguration;
    void /* unknown type, empty encoding */ blendMode;
    void /* unknown type, empty encoding */ opacity;
    void /* unknown type, empty encoding */ colorMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelLoadingTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 result:(id /* block */)a1;

@end
