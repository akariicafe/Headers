@class UIWindow, NSString, NSMutableArray, UITapGestureRecognizer;

@interface _HKOutsideTapWindowCallbacks : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (weak, nonatomic) UIWindow *window;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)addCallbackForView:(id)a0 outsideTapBlock:(id /* block */)a1;
- (BOOL)matchesWindow:(id)a0;
- (void)removeCallbackForView:(id)a0;
- (void)_installTapGestureRecognizerIfNeeded;
- (void)_removeTapGestureRecognizerIfNeeded;

@end
