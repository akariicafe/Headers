@class NSString;
@protocol SXAVPlayerItemFactory;

@interface SXAVPlayerFactory : NSObject <SXAVPlayerFactory>

@property (readonly, nonatomic) int audioMode;
@property (readonly, nonatomic) id<SXAVPlayerItemFactory> playerItemFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createPlayerWithURL:(id)a0;
- (id)initWithAudioMode:(int)a0 playerItemFactory:(id)a1;

@end
