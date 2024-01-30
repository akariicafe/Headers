@class NSString;
@protocol SVAVPlayerItemFactory;

@interface SVAVPlayerFactory : NSObject <SVAVPlayerFactory>

@property (readonly, nonatomic) int audioMode;
@property (readonly, nonatomic) id<SVAVPlayerItemFactory> playerItemFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createPlayerWithURL:(id)a0;
- (id)initWithAudioMode:(int)a0 playerItemFactory:(id)a1;

@end
