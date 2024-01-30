@class NSString, _UISEGestureFeatureSettings, _UISEMuxGestureFeature;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate> {
    _UISEGestureFeatureSettings *_settings;
    id /* block */ _createFeatureBlock;
    _UISEMuxGestureFeature *_rootFeature;
    unsigned long long _touchedEdges;
}

@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldSupportStylusTouches;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (unsigned long long)touchedEdges;
- (void)_setBottomEdgeAngleWindow:(double)a0;
- (void)_setBottomEdgeRegionSize:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_touchInterfaceOrientation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)featureDidChangeState:(id)a0;
- (double)_edgeRegionSize;
- (void)_setEdgeRegionSize:(double)a0;
- (double)_bottomEdgeRegionSize;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (BOOL)_shouldTryToBeginWithEvent:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)_bottomEdgeAngleWindow;
- (void)setMinimumNumberOfTouches:(unsigned long long)a0;
- (void)_setHysteresis:(double)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)debugDictionary;

@end
