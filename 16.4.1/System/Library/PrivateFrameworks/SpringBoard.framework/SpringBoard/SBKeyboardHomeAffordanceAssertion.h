@class UIWindow;

@interface SBKeyboardHomeAffordanceAssertion : NSObject

@property (weak, nonatomic) UIWindow *sourceWindow;
@property (nonatomic) double additionalEdgeMargin;

+ (id)assertionForGestureWindow:(id)a0;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithGestureWindow:(id)a0;

@end
