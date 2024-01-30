@class NSMutableArray;
@protocol CKPluginPlaybackManagerDelegate;

@interface CKPluginPlaybackManager : NSObject {
    unsigned long long _currentIndex;
}

@property (retain, nonatomic, setter=_setPluginItems:) NSMutableArray *_pluginItems;
@property (nonatomic, setter=_setPlayingBack:) BOOL isPlayingBack;
@property (weak, nonatomic) id<CKPluginPlaybackManagerDelegate> delegate;

- (void)_cleanup;
- (void)dealloc;
- (void)stopPlayback;
- (void).cxx_destruct;
- (void)addPluginItem:(id)a0;
- (id)initWithPluginItems:(id)a0;
- (void)startPlayback;

@end
