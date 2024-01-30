@protocol UIKBFocusGuideDelegate;

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;

- (void)_didUpdateFocusToPreferredFocusedView;
- (double)_focusPriority;
- (BOOL)_isUnoccludable;
- (BOOL)_isUnclippable;
- (id)focusGuideRegion:(id)a0 preferredFocusEnvironmentsForMovementRequest:(id)a1;
- (BOOL)_ignoresSpeedBumpEdges;

@end
