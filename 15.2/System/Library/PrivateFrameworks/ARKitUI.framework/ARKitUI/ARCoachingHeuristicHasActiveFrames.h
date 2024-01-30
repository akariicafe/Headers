@interface ARCoachingHeuristicHasActiveFrames : ARCoachingHeuristic {
    double _lastFrameTimestamp;
    int _frameCount;
}

- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
