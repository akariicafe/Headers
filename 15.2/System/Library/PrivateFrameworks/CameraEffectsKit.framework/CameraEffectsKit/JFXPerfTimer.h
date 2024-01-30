@interface JFXPerfTimer : NSObject {
    double _start;
    double _end;
}

- (double)end;
- (void)start;
- (double)elapsedTime;
- (id)init;
- (double)elapsedTimeMS;

@end
