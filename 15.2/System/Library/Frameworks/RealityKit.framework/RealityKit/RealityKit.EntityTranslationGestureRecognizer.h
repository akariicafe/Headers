@interface RealityKit.EntityTranslationGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ startingWorldLocation;
    void /* unknown type, empty encoding */ lastWorldLocation;
    void /* unknown type, empty encoding */ touchHeight;
    void /* unknown type, empty encoding */ velocity;
    void /* unknown type, empty encoding */ lastTranslation;
    void /* unknown type, empty encoding */ lastFrameTime;
    void /* unknown type, empty encoding */ startingScreenLocation;
    void /* unknown type, empty encoding */ lastScreenLocation;
    void /* unknown type, empty encoding */ hasBegun;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
