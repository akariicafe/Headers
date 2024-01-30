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

+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)_shouldSupportStylusTouches;

- (void)_setEdgeRegionSize:(double)a0;
- (void)_setHysteresis:(double)a0;
- (unsigned long long)touchedEdges;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)debugDictionary;
- (void)_setBottomEdgeAngleWindow:(double)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (void)reset;
- (double)_bottomEdgeAngleWindow;
- (void)setMinimumNumberOfTouches:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_setBottomEdgeRegionSize:(double)a0;
- (void)featureDidChangeState:(id)a0;
- (double)_edgeRegionSize;
- (BOOL)_shouldTryToBeginWithEvent:(id)a0;
- (double)_bottomEdgeRegionSize;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)_touchInterfaceOrientation;

@end
