@class NSString, NSHashTable;

@interface AVTTouchDownGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSHashTable *recognizersRequiredToFail;
@property (nonatomic) BOOL allowsTouchesToPassThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configure;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)requireGestureRecognizerToFail:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
