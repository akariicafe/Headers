@protocol UIKBFocusGuideDelegate;

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;

- (BOOL)_isUnoccludable;
- (void)_didUpdateFocusToPreferredFocusedView;
- (double)_focusPriority;

@end
