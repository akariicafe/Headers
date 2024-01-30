@class NSArray, NSMutableDictionary;

@interface STMSizer : STMSizeCache {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingEventsLock;
    NSMutableDictionary *_pendingEventsByPath;
    struct __FSEventStream { } *_fsStream;
    BOOL _streamRunning;
}

@property (retain, nonatomic) NSArray *rootPaths;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPrefsKey:(id)a0;
- (void)setEvent:(id)a0 forItem:(id)a1;
- (void)startSizing:(id)a0;
- (void)startSizer;
- (void)stopSizer;
- (void)processEvents:(id)a0;

@end
