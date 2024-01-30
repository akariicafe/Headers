@class IKDOMDocument, NSString, NSDate, IKJSMediaItem, IKAppPlayerBridge, NSArray, NSDictionary, NSMutableDictionary, IKJSPlaylist, NSNumber;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {
    IKJSPlaylist *_playlist;
    long long _playerState;
    BOOL _holdingSelfReference;
    NSMutableDictionary *_timedMetadataListeners;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
}

@property (readonly, nonatomic) IKAppPlayerBridge *bridge;
@property (readonly, nonatomic) NSString *playbackState;
@property (retain, nonatomic) IKJSPlaylist *playlist;
@property (readonly, nonatomic) IKJSMediaItem *currentMediaItem;
@property (readonly, nonatomic) IKJSMediaItem *nextMediaItem;
@property (readonly, nonatomic) IKJSMediaItem *previousMediaItem;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (nonatomic) double playbackRate;
@property (nonatomic) BOOL muted;
@property (retain, nonatomic) IKDOMDocument *overlayDocument;
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) BOOL interactiveOverlayDismissable;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (nonatomic) BOOL showsResumeMenu;
@property (retain, nonatomic) NSDictionary *userInfo;

- (void)previous;
- (void)next;
- (long long)state;
- (void).cxx_destruct;
- (id)init;
- (void)seekToTime:(double)a0;
- (void)pause;
- (BOOL)dispatchEvent:(id)a0 userInfo:(id)a1;
- (void)play;
- (void)dealloc;
- (void)stop;
- (void)present;
- (void)addEventListener:(id)a0 :(id)a1 :(id)a2;
- (void)changeToMediaAtIndex:(unsigned long long)a0;
- (id)initWithAppContext:(id)a0 bridge:(id)a1;
- (void)removeEventListener:(id)a0 :(id)a1;
- (BOOL)_timedMetadataDidChangeWithExtraInfo:(id)a0;
- (void)_removeManagedReference;
- (void)_addManagedReference;

@end
