@class NSObject;
@protocol TVPMediaItem;

@interface VUIPostPlayUpsellManager : NSObject

@property (retain, nonatomic) NSObject<TVPMediaItem> *deferredMediaItem;
@property (nonatomic) double deferredElapsedTime;

+ (id)sharedInstance;

- (void)_reset;
- (void).cxx_destruct;
- (id)init;
- (void)handleRouterDataSourceIfNeeded:(id)a0;
- (BOOL)_isFullScreenPlaybackUIShown;
- (void)_handleDeferredMediaItemUpsellIfNeeded;
- (void)_currentMediaItemWillChange:(id)a0;
- (void)_handleUpsellForMediaItem:(id)a0 elapsedTimeInterval:(double)a1;

@end
