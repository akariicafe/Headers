@class NSString, NSHashTable;

@interface MCDNowPlayingObserver : NSObject {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned int playbackState;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_notifyObservers;
- (unsigned int)queryPlaybackState;
- (void)playbackStateChanged:(id)a0;

@end
