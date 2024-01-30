@class MRPlaybackSessionRequest, NSError, MRPlayerPath;

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionRequest *request;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithRequest:(id)a0 error:(id)a1 playerPath:(id)a2;
- (unsigned long long)type;

@end
