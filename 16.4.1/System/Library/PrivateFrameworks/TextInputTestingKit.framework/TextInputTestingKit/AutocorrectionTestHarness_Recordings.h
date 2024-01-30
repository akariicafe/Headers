@interface AutocorrectionTestHarness_Recordings : AutocorrectionTestHarness

- (id)initWithAttributes:(id)a0;
- (BOOL)compareExpectedValue:(id)a0 withResult:(id)a1;
- (void)drainRunLoopEvents;
- (id)emptyResultForTest:(id)a0;
- (id)tryTouchingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)typePoints:(id)a0;
- (id)typeTest:(id)a0 withError:(id)a1;

@end
