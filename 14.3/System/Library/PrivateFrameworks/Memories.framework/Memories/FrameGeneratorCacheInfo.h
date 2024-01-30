@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject

@property (retain, nonatomic) VideoMovie *movie;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double rotation;

- (void)dealloc;

@end
