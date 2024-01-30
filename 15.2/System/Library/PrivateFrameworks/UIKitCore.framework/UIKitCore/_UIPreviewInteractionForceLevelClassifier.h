@class _UIPreviewInteractionStateRecognizer;

@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier {
    _UIPreviewInteractionStateRecognizer *_stateRecognizer;
}

- (BOOL)wantsUnclampedForceValues;
- (void)observeTouchWithForceValue:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)a0 minimumRequiredForceLevel:(long long)a1;
- (void)reset;
- (void)touchForceMultiplierDidChange;

@end
