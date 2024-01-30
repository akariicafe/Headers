@class MRPlayerPath;

@interface MRSetNowPlayingPlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)a0;
- (unsigned long long)type;

@end
