@interface NTKKeylineTouchable : NSObject {
    id /* block */ _handler;
}

+ (id)touchableWithHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 keyline:(id)a1 withEvent:(id)a2;

@end
