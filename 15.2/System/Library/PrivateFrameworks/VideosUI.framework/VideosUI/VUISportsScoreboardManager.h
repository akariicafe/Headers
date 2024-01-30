@class NSTimer, NSMutableDictionary;

@interface VUISportsScoreboardManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sportsEventsById;
@property (retain, nonatomic) NSTimer *scoreboardUpdateTimer;
@property (nonatomic) long long scoreboardUpdateInterval;
@property (nonatomic) BOOL updateInProgress;

+ (id)sharedInstance;
+ (void)registerDelegate:(id)a0 canonicalId:(id)a1;
+ (void)unregisterDelegate:(id)a0 canonicalId:(id)a1;

- (void)_invalidateTimer;
- (void).cxx_destruct;
- (id)init;
- (void)_updateTimer;
- (void)_resetTimer;
- (void)_registerToApplicationNotifications;
- (void)_registerToPlaybackNotifications;
- (id)_prepareJSContextDictionaryArgument;
- (void)_updateScores:(id)a0;
- (void)_playbackUIBeingShownDidChange:(id)a0;
- (void)_getScoreboardUpdates;

@end
