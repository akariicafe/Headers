@class NSSet, PKTextInputElement;

@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder

@property (readonly, nonatomic) PKTextInputElement *foundElement;
@property (readonly, nonatomic) NSSet *candidateElements;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;

- (void).cxx_destruct;
- (void)_finishSingleElementSearchIfReadyAtPosition:(struct CGPoint { double x0; double x1; })a0 coordinateSpace:(id)a1 candidates:(id)a2 completion:(id /* block */)a3;
- (void)findSingleElementAtPosition:(struct CGPoint { double x0; double x1; })a0 coordinateSpace:(id)a1 completion:(id /* block */)a2;
- (void)findSingleElementCloseToPosition:(struct CGPoint { double x0; double x1; })a0 coordinateSpace:(id)a1 completion:(id /* block */)a2;

@end
