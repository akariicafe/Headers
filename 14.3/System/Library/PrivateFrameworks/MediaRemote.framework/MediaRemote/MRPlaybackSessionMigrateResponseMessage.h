@class MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;

- (id)initWithRequest:(id)a0;
- (unsigned long long)type;

@end
