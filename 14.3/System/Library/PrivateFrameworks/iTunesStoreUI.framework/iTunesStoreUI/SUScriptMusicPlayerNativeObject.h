@interface SUScriptMusicPlayerNativeObject : SUScriptNativeObject

- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)_nowPlayingChangeNotification:(id)a0;
- (void)_playbackStateChangeNotification:(id)a0;
- (void)_volumeChangeNotification:(id)a0;

@end
