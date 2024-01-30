@class MRPlayerPath, MRPlaybackQueueRequest;

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackQueueRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithRequest:(id)a0 forPlayerPath:(id)a1;

@end
