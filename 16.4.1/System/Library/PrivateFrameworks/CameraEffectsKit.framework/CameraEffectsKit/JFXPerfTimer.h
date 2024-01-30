@interface JFXPerfTimer : NSObject {
    double _start;
    double _end;
}

- (double)end;
- (double)elapsedTime;
- (id)init;
- (void)start;
- (double)elapsedTimeMS;

@end
