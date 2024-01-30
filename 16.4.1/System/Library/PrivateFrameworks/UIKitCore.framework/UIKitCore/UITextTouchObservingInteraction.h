@class UILongPressGestureRecognizer, NSString, UIView;

@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeGestureRecognizers;
- (void)_createGestureRecognizersIfNecessary;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)didMoveToView:(id)a0;
- (void)longPressObserved:(id)a0;

@end
