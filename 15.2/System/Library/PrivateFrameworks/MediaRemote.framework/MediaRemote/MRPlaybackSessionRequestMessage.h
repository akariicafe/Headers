@class MRPlaybackSessionRequest, MRPlayerPath;

@interface MRPlaybackSessionRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithRequest:(id)a0 forPlayerPath:(id)a1;
- (unsigned long long)type;

@end
