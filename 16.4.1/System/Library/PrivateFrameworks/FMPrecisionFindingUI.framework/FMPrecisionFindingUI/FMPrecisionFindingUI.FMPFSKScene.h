@class NSString;

@interface FMPrecisionFindingUI.FMPFSKScene : SKScene <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ sceneSize;
    void /* unknown type, empty encoding */ ringView;
    void /* unknown type, empty encoding */ axisesNode;
    void /* unknown type, empty encoding */ patternNode;
    void /* unknown type, empty encoding */ previousHeading;
    void /* unknown type, empty encoding */ motionManager;
    void /* unknown type, empty encoding */ dotCountObservation;
    void /* unknown type, empty encoding */ debugModeObservation;
    void /* unknown type, empty encoding */ opacitySpring;
    void /* unknown type, empty encoding */ lastRenderTime;
    void /* unknown type, empty encoding */ isolationQueue;
    void /* unknown type, empty encoding */ initialBearing;
    void /* unknown type, empty encoding */ initialTouchDownLocation;
    void /* unknown type, empty encoding */ usingDebuggingTouches;
    void /* unknown type, empty encoding */ shouldApplyOpacity;
    void /* unknown type, empty encoding */ opacity;
    void /* unknown type, empty encoding */ presentedOpacity;
    void /* unknown type, empty encoding */ altDelegate;
    void /* unknown type, empty encoding */ isInteractivelyDebugging;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)update:(double)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
