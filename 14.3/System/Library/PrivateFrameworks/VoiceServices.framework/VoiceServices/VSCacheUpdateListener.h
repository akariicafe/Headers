@class NSDictionary, NSTimer, NSLock, NSMutableArray;

@interface VSCacheUpdateListener : NSObject {
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}

+ (id)sharedListenerIfExists;
+ (id)sharedListener;

- (void)stopListening;
- (void)_flush;
- (id)_initShared;
- (id)init;
- (void)dealloc;
- (void)_enqueueRequest:(id)a0;
- (void)_spokenLanguageChanged:(id)a0;
- (void)startListening;
- (void)performUpdateForModelIdentifier:(id)a0 classIdentifier:(id)a1;

@end
