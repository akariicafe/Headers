@class UITouch, NSSet, NSMutableSet;

@interface _UIHoverTouchDeliveryTable : NSObject {
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
}

@property (readonly, nonatomic) UITouch *touch;
@property (readonly, nonatomic) NSSet *gestureRecognizers;

- (void)removeGestureRecognizer:(id)a0;
- (void)_cancelAllGestureRecognizers;
- (void).cxx_destruct;
- (id)initWithTouch:(id)a0;
- (void)updateForEvent:(id)a0 forcingHitTest:(BOOL)a1;
- (long long)updateGestureRecognizerForDelivery:(id)a0;

@end
