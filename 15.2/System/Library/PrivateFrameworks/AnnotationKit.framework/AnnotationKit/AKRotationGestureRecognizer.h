@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {
    unsigned long long tries;
}

@property (weak, nonatomic) AKController *annotationController;

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
