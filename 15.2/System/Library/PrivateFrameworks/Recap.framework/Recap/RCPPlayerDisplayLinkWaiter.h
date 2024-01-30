@class RCPPlayerPlaybackOptions;

@interface RCPPlayerDisplayLinkWaiter : NSObject

@property (nonatomic) long long linkCallbackCount;
@property (retain, nonatomic) RCPPlayerPlaybackOptions *options;

- (void)displayLinkFired:(id)a0;
- (void)waitWithOptions:(id)a0;
- (void).cxx_destruct;

@end
