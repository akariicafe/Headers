@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizerDelegate;

@interface _UIScreenEdgePanRecognizer : NSObject {
    BOOL _hasDoneInitialBackProjectionTest;
    struct CGPoint { double x; double y; } _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    double _lastTouchTimestamp;
    long long _lastTouchModifier;
    long long _type;
}

@property (retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property (readonly, nonatomic) BOOL hasRecordedData;
@property (readonly, nonatomic) BOOL useGrapeFlags;
@property (nonatomic) BOOL shouldUseGrapeFlags;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } _lastTouchLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenBounds;
@property (nonatomic) unsigned long long targetEdges;
@property (nonatomic) BOOL requiresFlatThumb;
@property (nonatomic) BOOL recognizeAlongEdge;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long recognizedRegion;
@property id<_UIScreenEdgePanRecognizerDelegate> delegate;

- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 modifier:(long long)a2 region:(unsigned long long)a3 interfaceOrientation:(long long)a4 forceState:(long long)a5;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 modifier:(long long)a2 region:(unsigned long long)a3 interfaceOrientation:(long long)a4 forceState:(long long)a5;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 modifier:(long long)a2 region:(unsigned long long)a3 interfaceOrientation:(long long)a4 forceState:(long long)a5;
- (void)_setState:(long long)a0;
- (void)_idleTimerElapsed:(id)a0;
- (id)initWithType:(long long)a0 settings:(id)a1;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)a0;
- (void)_longPressTimerElapsed:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_targetEdges;
- (id)initWithType:(long long)a0;
- (void)dealloc;
- (void)reset;
- (long long)_type;

@end
