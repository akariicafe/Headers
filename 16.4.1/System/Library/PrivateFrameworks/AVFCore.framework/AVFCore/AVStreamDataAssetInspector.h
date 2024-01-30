@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (long long)trackCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)providesPreciseDurationAndTiming;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)trackIDs;
- (id)initWithTrackIDs:(id)a0;

@end
