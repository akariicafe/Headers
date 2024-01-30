@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray *segments;

- (void)removeSegment:(id)a0;
- (void)removeAllSegments;
- (BOOL)clipToTimeRange:(struct { double x0; double x1; })a0;
- (id)classForCoder;
- (void)addSegment:(id)a0;
- (void)setSegments:(id)a0;
- (void)addSegments:(id)a0;

@end
