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
+ (void)setSharedInstance:(id)a0;
+ (id)singletonInstance;
+ (double)decrementClientDelay;

- (void)incrementRecentClientCount;
- (void)startServer;
- (id)addObserver:(id /* block */)a0;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)decrementRecentClientCountAfterDelay;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)resetCache;
- (void)managedKeyboardSettingsDidChange:(id)a0;
- (void)updateCache;
- (id)init;
- (void)handleIdleTimeout;
- (void).cxx_destruct;
- (void)loadPhraseShortcutPairs:(id /* block */)a0;

@end
