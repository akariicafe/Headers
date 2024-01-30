@interface TKVibrationRecorderRippleTouchContext : NSObject {
    double _creationTimestamp;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;

- (id)init;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (double)timeIntervalSinceCreation;

@end
