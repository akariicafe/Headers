@class NSArray;

@interface FigAlternateObjCAudioAttributes : NSObject {
    struct OpaqueFigAlternate { } *_alternate;
    NSArray *_formatIDs;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) NSArray *formatIDs;

- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;
- (long long)channelCountForMediaOption:(id)a0;
- (void)dealloc;

@end
