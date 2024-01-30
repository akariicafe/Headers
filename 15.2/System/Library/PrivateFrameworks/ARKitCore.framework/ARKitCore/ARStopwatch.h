@interface ARStopwatch : NSObject {
    double _startTime;
    BOOL _started;
}

- (void)start;
- (double)stop;

@end
