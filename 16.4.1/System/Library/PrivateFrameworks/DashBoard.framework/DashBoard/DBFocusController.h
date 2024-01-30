@class UIScreen, NSString, UIWindow, DBFocusAssertion, NSMutableArray;
@protocol BSInvalidatable;

@interface DBFocusController : NSObject

@property (retain, nonatomic) UIScreen *screen;
@property (copy, nonatomic) NSString *displayID;
@property (retain, nonatomic) NSMutableArray *assertions;
@property (retain, nonatomic) DBFocusAssertion *lastFocusAssertion;
@property (weak, nonatomic) UIWindow *focusWindow;
@property (retain, nonatomic) id<BSInvalidatable> focusDeferral;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (void)_applyAssertion:(id)a0 withHeading:(unsigned long long)a1 focusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_updateEventFocusWithHeading:(unsigned long long)a0 focusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dropReason:(id)a0;
- (void)dropReason:(id)a0 withHeading:(unsigned long long)a1 focusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (int)focusedPid;
- (void)takeWithPriority:(double)a0 reason:(id)a1 forWindow:(id)a2 bundleIdentifier:(id)a3 pid:(int)a4 scene:(id)a5;
- (void)takeWithPriority:(double)a0 reason:(id)a1 forWindow:(id)a2 bundleIdentifier:(id)a3 pid:(int)a4 scene:(id)a5 heading:(unsigned long long)a6 focusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;

@end
