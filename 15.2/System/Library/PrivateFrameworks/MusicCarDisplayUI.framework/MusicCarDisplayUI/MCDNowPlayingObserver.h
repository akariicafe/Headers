@class NSString, NSHashTable;

@interface MCDNowPlayingObserver : NSObject {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned int playbackState;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyObservers;
- (unsigned int)queryPlaybackState;
- (void)playbackStateChanged:(id)a0;

@end
