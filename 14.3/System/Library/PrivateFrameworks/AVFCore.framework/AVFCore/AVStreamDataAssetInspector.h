@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (void)dealloc;
- (id)trackIDs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqual:(id)a0;
- (long long)trackCount;
- (id)initWithTrackIDs:(id)a0;
- (BOOL)providesPreciseDurationAndTiming;

@end
