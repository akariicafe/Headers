@class NSArray, NSMutableDictionary;

@interface SUAudioPlayerSessionManager : NSObject {
    NSMutableDictionary *_sessions;
}

@property (readonly, nonatomic) NSArray *allSessionURLs;

+ (id)sessionManager;

- (void)dealloc;
- (id)init;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (id)audioPlayerForURL:(id)a0;
- (id)endSessionForURL:(id)a0;
- (id)startSessionWithURL:(id)a0;
- (id)stopAllAudioPlayerSessions;

@end
