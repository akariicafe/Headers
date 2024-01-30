@class MRPlayerPath, MRPlaybackQueueRequest;

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackQueueRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithRequest:(id)a0 forPlayerPath:(id)a1;
- (unsigned long long)type;

@end
