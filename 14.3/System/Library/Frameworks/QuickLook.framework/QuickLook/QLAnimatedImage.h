@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject {
    QLImageData *_imageData;
    unsigned long long _durationsCount;
    struct QLFrameDurationInformation { double x0; double x1; } *_durations;
    double _duration;
    UIImage *_lastImage;
    unsigned long long _lastImageIndex;
}

- (unsigned long long)frameCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)generateDurations;
- (BOOL)time:(double)a0 belongsToIndex:(unsigned long long)a1;
- (long long)indexForTime:(double)a0;
- (id)frameAtTime:(double)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;
- (double)duration;

@end
