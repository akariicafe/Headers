@class NWPathEvaluator;

@interface VUIPlayer : TVPPlayer

@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;

+ (void)initialize;
+ (id)savedPreferredAudioLanguageCode;
+ (void)setSavedPreferredAudioLanguageCode:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithName:(id)a0;
- (void)_currentMediaItemDidChange:(id)a0;
- (void)_videoPlaybackSettingsDidChange:(id)a0;
- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;

@end
