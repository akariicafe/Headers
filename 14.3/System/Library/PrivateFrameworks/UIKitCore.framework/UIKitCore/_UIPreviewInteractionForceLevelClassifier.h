@class _UIPreviewInteractionStateRecognizer;

@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier {
    _UIPreviewInteractionStateRecognizer *_stateRecognizer;
}

- (id)init;
- (void)touchForceMultiplierDidChange;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)wantsUnclampedForceValues;
- (void)observeTouchWithForceValue:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)a0 minimumRequiredForceLevel:(long long)a1;

@end
