@interface VTCorruptDetector : NSObject {
    int _zeroSamplesCount;
    int _maxZeroSamplesCount;
}

- (void)analyze:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0;
- (id)init;
- (void)reset;
- (BOOL)audioHasZeroRun;
- (int)getMaxZeroSampleCount;

@end
