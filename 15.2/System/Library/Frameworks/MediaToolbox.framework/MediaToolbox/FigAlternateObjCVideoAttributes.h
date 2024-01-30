@class NSString, NSArray;

@interface FigAlternateObjCVideoAttributes : NSObject {
    struct OpaqueFigAlternate { } *_alternate;
    NSArray *_videoCodecTypes;
    NSString *_videoRange;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) NSString *videoRange;
@property (readonly, nonatomic) NSArray *codecTypes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (readonly, nonatomic) double nominalFrameRate;

- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;
- (void)dealloc;

@end
