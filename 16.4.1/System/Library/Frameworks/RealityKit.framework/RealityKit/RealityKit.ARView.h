@class CALayer, ARSession, NSArray;

@interface RealityKit.ARView : UIView <UIGestureRecognizerDelegate, ARSessionProviding> {
    void /* unknown type, empty encoding */ _scene;
    void /* unknown type, empty encoding */ __delegatePrivate;
    void /* unknown type, empty encoding */ initialized;
    void /* unknown type, empty encoding */ engineStartedByThisView;
    void /* unknown type, empty encoding */ currentIBL;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ __environmentEntity;
    void /* unknown type, empty encoding */ __enableAutomaticFrameRate;
    void /* unknown type, empty encoding */ __preferredFrameRate;
    void /* unknown type, empty encoding */ singleTapGesture;
    void /* unknown type, empty encoding */ engineWasRunningWhenLastInTheForeground;
    void /* unknown type, empty encoding */ backingLayer;
    void /* unknown type, empty encoding */ useCAMetalLayer;
    void /* unknown type, empty encoding */ pauseEngineOnLeaveForeground;
    void /* unknown type, empty encoding */ __renderGraphEmitter;
    void /* unknown type, empty encoding */ __forceLocalizedProbes;
    void /* unknown type, empty encoding */ __parallaxBackgroundProbe;
    void /* unknown type, empty encoding */ layerHandle;
    void /* unknown type, empty encoding */ updateSubscription;
    void /* unknown type, empty encoding */ renderSubscription;
    void /* unknown type, empty encoding */ realityFusionSession;
    void /* unknown type, empty encoding */ arSystem;
    void /* unknown type, empty encoding */ renderView;
    void /* unknown type, empty encoding */ interfaceOrientation;
    void /* unknown type, empty encoding */ lastInterfaceOrientation;
    void /* unknown type, empty encoding */ viewCounterRotating;
    void /* unknown type, empty encoding */ updateAfterCounterRotation;
    void /* unknown type, empty encoding */ sessionComponents;
    void /* unknown type, empty encoding */ __disableCounterRotation;
    void /* unknown type, empty encoding */ __disableComposition;
    void /* unknown type, empty encoding */ __nonARKitDevices;
    void /* unknown type, empty encoding */ enablePresentsWithTransaction;
    void /* unknown type, empty encoding */ presentsWithTransactionFrames;
    void /* unknown type, empty encoding */ __statisticsOptions;
    void /* unknown type, empty encoding */ __disableStatisticsRendering;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic, readonly) CALayer *renderLayer;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic, retain) ARSession *session;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)handleRotation:(id)a0;
- (void)windowDidRotateWithNotification:(id)a0;
- (void)windowWillRotateWithNotification:(id)a0;
- (float)distanceInMetersFromEntityAccessibilityWrapper:(id)a0;
- (void)handleScale:(id)a0;
- (void)handleSingleTapWithRecognizer:(id)a0;
- (BOOL)handleTapForEntityAccessibilityWrapper:(id)a0;
- (void)handleTranslation:(id)a0;
- (void)restartEngineWithNotification:(id)a0;
- (void)willResignActiveWithNotification:(id)a0;
- (void)windowWillAnimateRotationWithNotification:(id)a0;

@end
