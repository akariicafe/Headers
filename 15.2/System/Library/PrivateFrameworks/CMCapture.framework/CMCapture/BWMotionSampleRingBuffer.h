@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {
    BWRingBuffer *_ringBuffer;
    double _maxDuration;
    int _maxCount;
}

- (struct { BOOL x0; double x1; struct { double x0; double x1; double x2; double x3; } x2; } *)lastSample;
- (id)initWithMaxDuration:(double)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (double)duration;
- (void)addMotionDataToRingBuffer:(struct { BOOL x0; double x1; struct { double x0; double x1; double x2; double x3; } x2; } *)a0 withSampleCount:(int)a1;
- (unsigned long long)count;
- (void)dealloc;

@end
