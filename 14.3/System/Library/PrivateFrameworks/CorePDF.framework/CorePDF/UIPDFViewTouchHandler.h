@class UILongPressGestureRecognizer, NSString, UIPDFPageView, UIMenuController, UIPDFSelectionController, UIPDFMagnifierController, UITapGestureRecognizer;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFMagnifierController *_magnifyController;
    BOOL _trackingSelection;
    BOOL _showMagnifier;
    BOOL _showLoupe;
    BOOL _firstTouch;
    BOOL _useDelegateForLinks;
}

@property BOOL allowMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)releaseViewManager;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)selectAll:(id)a0;
- (BOOL)resignFirstResponder;
- (void)copy:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithView:(id)a0;
- (void)dealloc;
- (id)nextResponder;
- (void)hideMenu;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)showMenu;
- (BOOL)canBecomeFirstResponder;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)enableRecognizers;
- (void)disableRecognizers;
- (void)setFirstTouch;
- (void)doubleTapRecognized:(id)a0;
- (void)singleTapRecognized:(id)a0;
- (void)twoFingerTapRecognized:(id)a0;
- (void)briefPressRecognized:(id)a0;
- (void)longPressRecognized:(id)a0;
- (BOOL)delegateGesture:(id)a0 kind:(int)a1;

@end
