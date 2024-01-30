@class AVMediaSelectionOption, FigAlternateObjC;

@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    AVMediaSelectionOption *_mediaSelectionOption;
}

@property (readonly, nonatomic) long long channelCount;

- (void)dealloc;
- (double)sampleRate;
- (id)initWithFigAlternateObjC:(id)a0 mediaSelectionOption:(id)a1;
- (BOOL)isBinaural;
- (BOOL)isDownmix;

@end
