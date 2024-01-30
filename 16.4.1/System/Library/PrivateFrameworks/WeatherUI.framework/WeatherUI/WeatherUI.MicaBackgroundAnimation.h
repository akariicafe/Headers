@interface WeatherUI.MicaBackgroundAnimation : NSObject <CALayerDelegate> {
    void /* unknown type, empty encoding */ layer;
    void /* unknown type, empty encoding */ playbackCoordinator;
    void /* unknown type, empty encoding */ rootMicaLayer;
    void /* unknown type, empty encoding */ rotationLayer;
    void /* unknown type, empty encoding */ displayScale;
    void /* unknown type, empty encoding */ timeStep;
    void /* unknown type, empty encoding */ randomSpeedVariance;
    void /* unknown type, empty encoding */ stateName;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ scale;
}

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
