@class CESRAssetConfig, _EARFormatter;

@interface CESRFormatter : NSObject {
    _EARFormatter *_formatter;
    CESRAssetConfig *_assetConfig;
}

- (void).cxx_destruct;
- (id)formatSpeechTokensWithAutoPunctuation:(id)a0;
- (id)initWithAssetConfig:(id)a0;

@end
