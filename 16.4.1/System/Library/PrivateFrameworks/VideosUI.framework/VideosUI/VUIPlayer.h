@interface VUIPlayer : TVPPlayer

+ (void)initialize;
+ (id)savedPreferredAudioLanguageCode;
+ (void)updateSupplementaryAvailableAudioLanguageCodes:(id)a0;

- (id)initWithName:(id)a0;
- (void)dealloc;
- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
- (void)_currentMediaItemDidChange:(id)a0;
- (void)_videoPlaybackSettingsDidChange:(id)a0;

@end
