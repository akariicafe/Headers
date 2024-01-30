@class NSArray;
@protocol PXFMSong;

@interface PXFlexMusicPathfinder : NSObject {
    NSArray *_renditions;
}

@property (readonly, nonatomic) id<PXFMSong> song;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSong:(id)a0;
- (void)findPathFromCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inRendition:(id)a1 withTargetRemainder:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 tolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 result:(id /* block */)a4;
- (void)_loadRenditionsIfNeeded;

@end
