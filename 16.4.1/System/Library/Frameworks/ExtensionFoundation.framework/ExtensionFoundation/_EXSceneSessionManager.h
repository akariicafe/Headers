@class NSMutableDictionary;

@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions;

+ (id)sharedInstance;

- (id)sessionForIdentifier:(id)a0;
- (id)_init;
- (void)addSession:(id)a0;
- (void)removeSessionForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)sessions;

@end
