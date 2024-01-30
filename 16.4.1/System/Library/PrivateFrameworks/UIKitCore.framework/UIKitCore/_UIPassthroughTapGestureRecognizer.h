@interface _UIPassthroughTapGestureRecognizer : UITapGestureRecognizer {
    struct { unsigned char commandHeldThroughAllTouchPhases : 1; } _flags;
}

@property (readonly, nonatomic) BOOL tapWasCommandModified;

- (void)encodeWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)reset;

@end
