@class MRPlaybackSessionRequest, MRPlayerPath;

@interface MRPlaybackSessionRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithRequest:(id)a0 forPlayerPath:(id)a1;

@end
