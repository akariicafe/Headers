@interface _MKDirectionalArrowRecognizer : NSObject {
    id _target;
    SEL _action;
}

@property (nonatomic) long long state;
@property (nonatomic) long long modifierFlags;
@property (readonly, nonatomic) long long arrows;
@property (readonly, nonatomic) long long lastArrows;

- (void)keyUp:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)handleArrowMask:(long long)a0;

@end
