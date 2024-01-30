@class NSMutableArray;
@protocol CKPluginPlaybackManagerDelegate;

@interface CKPluginPlaybackManager : NSObject {
    unsigned long long _currentIndex;
}

@property (retain, nonatomic, setter=_setPluginItems:) NSMutableArray *_pluginItems;
@property (nonatomic, setter=_setPlayingBack:) BOOL isPlayingBack;
@property (weak, nonatomic) id<CKPluginPlaybackManagerDelegate> delegate;

- (void)stopPlayback;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)startPlayback;
- (id)initWithPluginItems:(id)a0;
- (void)addPluginItem:(id)a0;

@end
