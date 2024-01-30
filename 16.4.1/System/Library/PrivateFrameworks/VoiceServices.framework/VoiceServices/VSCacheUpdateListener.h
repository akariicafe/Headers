@class NSDictionary, NSTimer, NSLock, NSMutableArray;

@interface VSCacheUpdateListener : NSObject {
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}

+ (id)sharedListener;
+ (id)sharedListenerIfExists;

- (void)startListening;
- (id)_initShared;
- (void)stopListening;
- (void)_spokenLanguageChanged:(id)a0;
- (void)_flush;
- (void)_enqueueRequest:(id)a0;
- (void)dealloc;
- (void)performUpdateForModelIdentifier:(id)a0 classIdentifier:(id)a1;
- (id)init;

@end
