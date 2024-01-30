@class MRPlaybackSession;

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;

- (unsigned long long)type;
- (id)initWithPlaybackSession:(id)a0;

@end
