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
- (void)startListening;
- (void)_spokenLanguageChanged:(id)a0;
- (id)_initShared;
- (void)_enqueueRequest:(id)a0;
- (void)performUpdateForModelIdentifier:(id)a0 classIdentifier:(id)a1;
- (id)init;
- (void)_flush;
- (void)dealloc;

@end
