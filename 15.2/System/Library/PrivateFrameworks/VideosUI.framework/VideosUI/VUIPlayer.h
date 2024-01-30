@interface VUIPlayer : TVPPlayer

+ (void)initialize;
+ (id)savedPreferredAudioLanguageCode;
+ (void)setSavedPreferredAudioLanguageCode:(id)a0;

- (id)initWithName:(id)a0;
- (void)dealloc;
- (void)_currentMediaItemDidChange:(id)a0;
- (void)_videoPlaybackSettingsDidChange:(id)a0;
- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;

@end
