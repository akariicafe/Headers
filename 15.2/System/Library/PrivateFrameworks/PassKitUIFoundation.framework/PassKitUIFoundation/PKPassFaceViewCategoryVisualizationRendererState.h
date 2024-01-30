@interface PKPassFaceViewCategoryVisualizationRendererState : PKPassFaceViewRendererState {
    struct { double startTime; unsigned long long bucketCount; double *magnitudeForBucket; void *colorForBucket; struct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } motionMatrix; void /* unknown type, empty encoding */ data; } uniforms; struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ velocity; float radius; float scale; float scaleTarget; float created; void /* unknown type, empty encoding */ color; struct { void /* unknown type, empty encoding */ columns[4]; } matrix; } singleCircle; unsigned long long circleCount; struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ velocity; float radius; float scale; float scaleTarget; float created; void /* unknown type, empty encoding */ color; struct { void /* unknown type, empty encoding */ columns[4]; } matrix; } circles[88]; unsigned long long categoryCount; void /* unknown type, empty encoding */ gravity; unsigned int framesToRender; BOOL isAnimating; } _state;
}

- (void)dealloc;

@end
