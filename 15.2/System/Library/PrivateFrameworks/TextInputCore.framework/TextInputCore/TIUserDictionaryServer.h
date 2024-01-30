@class NSMutableArray, NSUUID, NSString, NSArray, NSObject, _KSTextReplacementServer;
@protocol OS_dispatch_queue;

@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSArray *_cache;
    BOOL _updating;
    int _pendingUpdates;
    unsigned long long _keyboardActivityState;
    long long _recentClientCount;
}

@property (copy, nonatomic) NSUUID *userDictionaryUUID;
@property (retain, nonatomic) _KSTextReplacementServer *textReplacementServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)singletonInstance;
+ (double)decrementClientDelay;
+ (void)setSharedInstance:(id)a0;

- (void)incrementRecentClientCount;
- (void)updateCache;
- (id)addObserver:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)loadPhraseShortcutPairs:(id /* block */)a0;
- (void)startServer;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (void)handleIdleTimeout;
- (void).cxx_destruct;
- (id)init;
- (void)managedKeyboardSettingsDidChange:(id)a0;
- (void)dealloc;
- (void)decrementRecentClientCountAfterDelay;
- (void)resetCache;
- (void)keyboardActivityDidTransition:(id)a0;

@end
