@class UIView, _UIInterfaceActionSelectByPressGestureRecognizer, UILongPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer, UIScrollView, NSArray, NSString, UIHoverGestureRecognizer, UISelectionFeedbackGenerator, NSMutableSet, NSPointerArray, UIGestureRecognizer;

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } actionSelectionInitialLocationInContainerView;
@property (readonly, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (readonly, nonatomic) _UIInterfaceActionSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognizer;
@property (readonly, nonatomic) NSMutableSet *viewsRequiringSelectionGestureDisabling;
@property (retain, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator;
@property (retain, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers;
@property (retain, nonatomic) id scrollViewWillBeginDraggingNotificationToken;
@property (retain, nonatomic) id scrollViewDidEndDraggingNotificationToken;
@property (retain, nonatomic) id scrollViewDidEndDeceleratingNotificationToken;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer;
@property (weak, nonatomic) UIView *trackableContainerView;
@property (weak, nonatomic) UIScrollView *actionsScrollView;
@property (nonatomic) BOOL scrubbingEnabled;
@property (nonatomic) BOOL selectByPressGestureEnabled;
@property (nonatomic) BOOL selectionFeedbackEnabled;
@property (nonatomic) BOOL selectByIndirectPointerTouchEnabled;
@property (retain, nonatomic) NSArray *representationViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)handlePressedFocusedInterfaceAction:(id)a0;
- (void)deselectAllActions;
- (void)_handleSystemProvidedGestureRecognizer:(id)a0;
- (id)_allGestureRecognizers;
- (void)_unregisterForScrollViewNotifications;
- (void)_handleActionSelectionGestureRecognizer:(id)a0;
- (BOOL)_isPresentedAndVisible;
- (void)_clearSystemProvidedGestureRecognizer;
- (id)_allActionViewsIncludingCooperatingActionViews;
- (BOOL)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_rolloverActionChanged:(id)a0;
- (void)_setSystemProvidedGestureRecognizer:(id)a0;
- (id)_interfaceActionOfFocusedRepresentationView;
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)a0;
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)a0;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)a0;
- (void)setCooperatingSelectionTrackingControllers:(id)a0;
- (id)focusedInterfaceAction;
- (void)_initializeSelectionGestureRecognizer;
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)a0 block:(id /* block */)a1;
- (BOOL)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)a0;
- (void)_invokeHandlerForInterfaceAction:(id)a0;
- (id)initWithTrackableContainerView:(id)a0 actionsScrollView:(id)a1;
- (void)_registerForScrollViewNotifications;
- (void)_noteScrollView:(id)a0 isUserScrolling:(BOOL)a1;

@end
