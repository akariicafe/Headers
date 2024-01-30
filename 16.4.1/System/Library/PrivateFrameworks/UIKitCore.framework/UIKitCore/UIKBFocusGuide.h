@protocol UIKBFocusGuideDelegate;

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) unsigned long long focusHeading;
@property (weak, nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;

- (BOOL)_isUnoccludable;
- (BOOL)_isUnclippable;
- (float)_focusPriority;
- (id)focusGuideRegion:(id)a0 preferredFocusEnvironmentsForMovementRequest:(id)a1;
- (BOOL)_ignoresSpeedBumpEdges;
- (void)_didUpdateFocusToPreferredFocusedView;
- (id)description;
- (void).cxx_destruct;

@end
