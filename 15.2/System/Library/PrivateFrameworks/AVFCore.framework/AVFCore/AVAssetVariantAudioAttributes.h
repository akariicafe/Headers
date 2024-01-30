@class NSArray, NSMutableDictionary, FigAlternateObjC;

@interface AVAssetVariantAudioAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    NSMutableDictionary *_renditionSpecificAttributesForMediaSelection;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) NSArray *formatIDs;

- (id)initWithFigAlternateObjC:(id)a0;
- (id)renditionSpecificAttributesForMediaOption:(id)a0;
- (void)dealloc;

@end
