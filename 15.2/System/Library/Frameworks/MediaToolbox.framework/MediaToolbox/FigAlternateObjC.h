@class FigAlternateObjCAudioAttributes, FigAlternateObjCVideoAttributes;

@interface FigAlternateObjC : NSObject {
    FigAlternateObjCVideoAttributes *_videoAttributes;
    FigAlternateObjCAudioAttributes *_audioAttributes;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) double peakBitRate;
@property (readonly, nonatomic) double averageBitRate;
@property (readonly, nonatomic) FigAlternateObjCVideoAttributes *videoAttributes;
@property (readonly, nonatomic) FigAlternateObjCAudioAttributes *audioAttributes;
@property (readonly, nonatomic) struct OpaqueFigAlternate { } *figAlternate;

- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;
- (void)dealloc;

@end
