@class NSArray;

@interface FigAlternateObjCAudioAttributes : FigKVCInspectable {
    struct OpaqueFigAlternate { } *_alternate;
    NSArray *_formatIDs;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) NSArray *formatIDs;

- (void)dealloc;
- (long long)channelCountForMediaOption:(id)a0;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;
- (BOOL)isBinauralMediaOption:(id)a0;
- (BOOL)isDownmixMediaOption:(id)a0;
- (double)sampleRateForMediaOption:(id)a0;

@end
