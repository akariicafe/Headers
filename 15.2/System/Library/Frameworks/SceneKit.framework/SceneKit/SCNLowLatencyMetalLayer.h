@interface SCNLowLatencyMetalLayer : CAMetalLayer

- (unsigned long long)maximumDrawableCount;
- (BOOL)lowLatency;

@end
