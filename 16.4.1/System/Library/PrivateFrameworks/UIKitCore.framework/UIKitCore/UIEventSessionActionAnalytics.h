@class UIEventSessionTouchEventAnalyzer, NSString, NSMutableSet, _UIEventSessionAction, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface UIEventSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _UIEventSessionAction *_lastAction;
    NSMutableSet *_accumulators;
    unsigned long long _maxDepth;
    UIEventSessionTouchEventAnalyzer *touchAnalyzer;
    long long _magicKeyboardState;
    long long _lastMagicKeyboardState;
    long long _hardwareKeyboardState;
    long long _lastHardwareKeyboardState;
    long long _uiInterfaceOrientation;
    long long _lastUIInterfaceOrientation;
}

@property (retain, nonatomic) NSNumber *sessionID;
@property (readonly, nonatomic) NSString *bundleID;

+ (id)sharedInstance;

- (void)q_addAccumulator:(id)a0;
- (void)writeAnalytics;
- (void)q_setupDefaultAnalytics;
- (void)q_flushRecentActions;
- (id)allAccumulatorNames;
- (void)q_updateAnalyticsFromAccumulators;
- (void)addAccumulator:(id)a0;
- (id)init;
- (void)q_addActionAndUpdate:(id)a0;
- (void).cxx_destruct;
- (void)didHardwareConfigurationChange:(id)a0;
- (id)_instanceOfActionClass:(Class)a0 source:(long long)a1;
- (void)didKeyCommand:(id)a0;
- (void)didPointerClick:(id)a0 withLocationInWindow:(struct CGPoint { double x0; double x1; })a1 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)didPointerHover:(id)a0 withLocationInWindow:(struct CGPoint { double x0; double x1; })a1 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)didScroll:(id)a0 withSource:(long long)a1;
- (void)didShowContextualMenuFromLocation:(struct CGPoint { double x0; double x1; })a0 withSource:(long long)a1;
- (void)didTap:(id)a0 withSource:(long long)a1;
- (void)didTextSelectionWithSource:(long long)a0;
- (void)didTouch:(id)a0 withLocationInWindow:(struct CGPoint { double x0; double x1; })a1 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withTrackpadFingerDownCount:(long long)a3;
- (void)didTypingWithSource:(long long)a0;
- (BOOL)getAIDState;
- (void)q_enumerateAnalytics:(id /* block */)a0;
- (void)q_updateHardwareState;
- (void)q_updateUIInterfaceOrientation;
- (void)q_writeAnalytics;
- (void)resetSessionID;
- (void)updateAIDState;
- (void)updateHardwareKeyboardState;
- (void)updateUIInterfaceOrientation;
- (void)writeEventWithFields:(id)a0 andName:(id)a1;

@end
