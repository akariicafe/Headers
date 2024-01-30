@class UIGestureRecognizer;
@protocol NACancelable;

@interface _HUScrollGestureRecognitionState : NSObject

@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) id<NACancelable> activationTimer;

- (id)initWithGestureRecognizer:(id)a0;
- (void).cxx_destruct;

@end
