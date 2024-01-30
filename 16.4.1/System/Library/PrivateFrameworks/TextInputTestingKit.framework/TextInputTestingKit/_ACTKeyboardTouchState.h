@class TIKeyboardTouchEvent;

@interface _ACTKeyboardTouchState : NSObject

@property (retain, nonatomic) TIKeyboardTouchEvent *lastTouchEvent;
@property (nonatomic) struct CGPoint { double x; double y; } initialDragPoint;
@property (nonatomic) BOOL dragged;

- (void).cxx_destruct;

@end
