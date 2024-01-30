@class UILongPressGestureRecognizer, NSString, UIView;

@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)_addGestureRecognizers;
- (void)longPressObserved:(id)a0;
- (void).cxx_destruct;
- (void)_removeGestureRecognizers;
- (void)_createGestureRecognizersIfNecessary;

@end
