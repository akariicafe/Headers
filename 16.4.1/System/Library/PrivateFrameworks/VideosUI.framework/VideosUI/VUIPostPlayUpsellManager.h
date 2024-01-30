@class NSObject;
@protocol TVPMediaItem;

@interface VUIPostPlayUpsellManager : NSObject

@property (retain, nonatomic) NSObject<TVPMediaItem> *deferredMediaItem;
@property (nonatomic) double deferredElapsedTime;

+ (id)sharedInstance;

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (void)handleRouterDataSourceIfNeeded:(id)a0;
- (void)_currentMediaItemWillChange:(id)a0;
- (void)_handleDeferredMediaItemUpsellIfNeeded;
- (void)_handleUpsellForMediaItem:(id)a0 elapsedTimeInterval:(double)a1;
- (BOOL)_isFullScreenPlaybackUIShown;
- (void)_isPlaybackUIBeingShownDidChange:(id)a0;

@end
