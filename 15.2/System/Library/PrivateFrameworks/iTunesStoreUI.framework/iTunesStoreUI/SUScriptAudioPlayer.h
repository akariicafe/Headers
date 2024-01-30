@class NSString, SUPlayerStatus, NSURL;

@interface SUScriptAudioPlayer : SUScriptObject {
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
    NSURL *_keyUrl;
    NSURL *_certificateUrl;
}

@property (readonly) double currentTime;
@property (readonly) double duration;
@property (readonly) long long state;
@property (readonly) NSString *URL;
@property (readonly) NSString *keyURL;
@property (readonly) NSString *certificateURL;
@property (readonly) NSString *nowPlayingKeyAlbumTitle;
@property (readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property (readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property (readonly) NSString *nowPlayingKeyArtist;
@property (readonly) NSString *nowPlayingKeyArtwork;
@property (readonly) NSString *nowPlayingKeyComposer;
@property (readonly) NSString *nowPlayingKeyDiscCount;
@property (readonly) NSString *nowPlayingKeyDiscNumber;
@property (readonly) NSString *nowPlayingKeyGenre;
@property (readonly) NSString *nowPlayingKeyPersistentID;
@property (readonly) NSString *nowPlayingKeyPlaybackDuration;
@property (readonly) NSString *nowPlayingKeyTitle;
@property (readonly) long long playerStateActive;
@property (readonly) long long playerStateBuffering;
@property (readonly) long long playerStateFailed;
@property (readonly) long long playerStateFinished;
@property (readonly) long long playerStatePaused;
@property (readonly) long long playerStateUnplayed;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (void)pause;
- (id)attributeKeys;
- (void)play;
- (void)dealloc;
- (void)stop;
- (id)scriptAttributeKeys;
- (void)setValue:(id)a0 forNowPlayingKey:(id)a1;
- (void)_audioPlayerStateChangeNotification:(id)a0;
- (id)initWithURL:(id)a0 keyURL:(id)a1 certificateURL:(id)a2;

@end
