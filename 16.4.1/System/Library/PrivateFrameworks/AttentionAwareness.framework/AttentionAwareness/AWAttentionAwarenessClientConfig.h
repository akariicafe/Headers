@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWAttentionAwarenessClientConfig : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    NSMutableDictionary *_notifyQueues;
    NSMutableDictionary *_notifyBlocks;
    unsigned long long _supportedEvents;
    BOOL _supportedEventsValid;
    unsigned long long _nextTagIndex;
    NSMutableDictionary *_tagMap;
    NSMutableDictionary *_tagRefCount;
}

+ (id)sharedClientConfig;

- (unsigned long long)supportedEvents;
- (void)incrementTagIndexRefCount:(unsigned long long)a0;
- (id)tagForIndex:(unsigned long long)a0;
- (struct AWNotification_s { } *)notifySupportedEventsChangedWithQueue:(id)a0 block:(id /* block */)a1;
- (void)updateState:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)addTag:(id)a0;
- (id)init;
- (void)cancelNotification:(struct AWNotification_s { } *)a0;
- (void)decrementTagIndexRefCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end
