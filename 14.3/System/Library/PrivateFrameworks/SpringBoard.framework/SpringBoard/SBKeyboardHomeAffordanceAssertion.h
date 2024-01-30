@class UIWindow;

@interface SBKeyboardHomeAffordanceAssertion : NSObject

@property (weak, nonatomic) UIWindow *sourceWindow;
@property (nonatomic) double additionalEdgeMargin;

+ (id)assertionForGestureWindow:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithGestureWindow:(id)a0;

@end
