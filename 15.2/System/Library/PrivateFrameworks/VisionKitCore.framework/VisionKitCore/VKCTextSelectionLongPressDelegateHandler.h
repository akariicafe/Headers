@class NSString, UIGestureRecognizer;
@protocol VKCTextSelectionLongPressHandlerDelegate;

@interface VKCTextSelectionLongPressDelegateHandler : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id<VKCTextSelectionLongPressHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
