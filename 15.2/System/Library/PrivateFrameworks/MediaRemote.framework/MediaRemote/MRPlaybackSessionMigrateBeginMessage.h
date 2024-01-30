@class MRPlaybackSessionRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithRequest:(id)a0 playerPath:(id)a1;

@end
