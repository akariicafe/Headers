@class MRPlaybackSession;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;

- (id)initWithPlaybackSession:(id)a0;
- (unsigned long long)type;

@end
