@class NSArray, AVMutableCompositionInternal;

@interface AVMutableComposition : AVComposition {
    AVMutableCompositionInternal *_mutablePriv;
}

@property (readonly, nonatomic) NSArray *tracks;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;

+ (id)compositionWithURLAssetInitializationOptions:(id)a0;
+ (id)composition;

- (void)setMetadata:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithComposition:(id)a0;
- (id)_newTrackForIndex:(long long)a0;
- (void)_notifyTracksThatSegmentsWillChange:(id)a0;
- (void)_notifyTracksThatSegmentsDidChange:(id)a0 successfully:(BOOL)a1;
- (BOOL)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofAsset:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;
- (void)removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)scaleTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)addMutableTrackWithMediaType:(id)a0 preferredTrackID:(int)a1;
- (void)removeTrack:(id)a0;
- (id)mutableTrackCompatibleWithTrack:(id)a0;
- (id)trackWithTrackID:(int)a0;
- (id)tracksWithMediaType:(id)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;

@end
