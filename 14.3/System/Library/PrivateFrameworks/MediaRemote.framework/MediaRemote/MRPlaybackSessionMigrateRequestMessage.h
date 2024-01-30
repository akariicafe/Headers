@class MRPlaybackSession, MRPlaybackSessionMigrateRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;
@property (readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithPlaybackSession:(id)a0 request:(id)a1 forPlayerPath:(id)a2;
- (unsigned long long)type;

@end
