@class NSArray, NSMutableDictionary;

@interface SUAudioPlayerSessionManager : NSObject {
    NSMutableDictionary *_sessions;
}

@property (readonly, nonatomic) NSArray *allSessionURLs;

+ (id)sessionManager;

- (id)init;
- (void)dealloc;
- (id)audioPlayerForURL:(id)a0;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (id)endSessionForURL:(id)a0;
- (id)stopAllAudioPlayerSessions;
- (id)startSessionWithURL:(id)a0;

@end
