@class AVMediaSelectionOption, FigAlternateObjC;

@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    AVMediaSelectionOption *_mediaSelectionOption;
}

@property (readonly, nonatomic) long long channelCount;

- (id)initWithFigAlternateObjC:(id)a0 mediaSelectionOption:(id)a1;
- (void)dealloc;

@end
