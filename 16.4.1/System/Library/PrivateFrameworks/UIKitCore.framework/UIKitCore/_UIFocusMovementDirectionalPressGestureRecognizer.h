@interface _UIFocusMovementDirectionalPressGestureRecognizer : _UIFocusMovementPressGestureRecognizer {
    struct { unsigned char determinedPressSource : 1; } _flags;
}

@property (nonatomic) unsigned long long pressSource;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)_filterPressesByPressSource:(id)a0;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)a0;

@end
