@class NSTimer, UIKeyboardLayoutStar, UIView, UIKBKeyView;

@interface UIGestureKeyboardIntroduction : NSObject {
    UIKeyboardLayoutStar *m_layout;
    UIView *m_view;
    UIKBKeyView *m_firstKeyView;
    UIKBKeyView *m_secondKeyView;
    id /* block */ m_completionBlock;
    double m_start;
    NSTimer *m_gestureKeyboardInfoTimer;
    struct CGPoint { double x; double y; } m_initPoint;
    BOOL m_isInTransition;
    BOOL m_hasPeeked;
    unsigned long long m_insertedTextLength;
}

- (void)dismissGestureKeyboardIntroduction;
- (void).cxx_destruct;
- (BOOL)showGestureKeyboardIntroduction;
- (void)dismissGestureKeyboardIntroduction:(id)a0;
- (id)initWithLayoutStar:(id)a0 completion:(id /* block */)a1;
- (void)insertText:(id)a0 forKey:(id)a1;
- (void)playGestureKeyboardIntroduction:(id)a0;
- (void)tryGestureKeyboardFromView:(id)a0 withEvent:(id)a1;

@end
