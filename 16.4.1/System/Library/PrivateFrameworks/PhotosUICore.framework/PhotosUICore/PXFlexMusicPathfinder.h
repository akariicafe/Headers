@class NSArray, FMSong;

@interface PXFlexMusicPathfinder : NSObject {
    NSArray *_renditions;
}

@property (readonly, nonatomic) FMSong *song;

- (id)init;
- (void).cxx_destruct;
- (void)_loadRenditionsIfNeeded;
- (void)findPathFromCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inRendition:(id)a1 withTargetRemainder:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 tolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 result:(id /* block */)a4;
- (id)initWithSong:(id)a0;

@end
