@class NSTimer, NSMutableDictionary;

@interface VUISportsScoreboardManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sportsEventsById;
@property (retain, nonatomic) NSTimer *scoreboardUpdateTimer;
@property (nonatomic) long long scoreboardUpdateInterval;
@property (nonatomic) BOOL updateInProgress;

+ (id)sharedInstance;
+ (void)unregisterDelegate:(id)a0 canonicalId:(id)a1;
+ (void)registerDelegate:(id)a0 canonicalId:(id)a1;

- (void)_updateTimer;
- (void)_invalidateTimer;
- (id)init;
- (void).cxx_destruct;
- (void)_resetTimer;
- (void)_playbackUIBeingShownDidChange:(id)a0;
- (void)_getScoreboardUpdates;
- (id)_prepareJSContextDictionaryArgument;
- (void)_registerToApplicationNotifications;
- (void)_registerToPlaybackNotifications;
- (void)_updateScores:(id)a0;

@end
