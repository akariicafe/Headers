@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {
    unsigned long long tries;
}

@property (weak, nonatomic) AKController *annotationController;

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;

@end
