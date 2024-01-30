@class MPCMediaFoundationTranslator, MPCPlaybackEngine;
@protocol MFPlaybackStackController;

@interface MPCPlayerItemConfigurator : NSObject

@property (nonatomic) long long defaultEQPresetType;
@property (readonly, weak, nonatomic) MPCMediaFoundationTranslator *translator;
@property (readonly, weak, nonatomic) id<MFPlaybackStackController> stackController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (void)_setupNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)a0;
- (id)initWithPlaybackEngine:(id)a0 stackController:(id)a1 translator:(id)a2;
- (void)configureQueuePlayerItem:(id)a0;

@end
