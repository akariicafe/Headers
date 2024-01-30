@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray *segments;

- (id)classForCoder;
- (void)addSegments:(id)a0;
- (void)removeSegment:(id)a0;
- (BOOL)clipToTimeRange:(struct { double x0; double x1; })a0;
- (void)setSegments:(id)a0;
- (void)removeAllSegments;
- (void)addSegment:(id)a0;

@end
