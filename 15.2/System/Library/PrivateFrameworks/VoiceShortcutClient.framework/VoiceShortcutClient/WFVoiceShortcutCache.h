@class NSArray, NSMutableArray;

@interface WFVoiceShortcutCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *voiceShortcuts;
@property (readonly, copy, nonatomic) NSMutableArray *waitingFetchRequests;
@property (readonly, nonatomic) unsigned long long state;

+ (BOOL)shouldCacheForCurrentProcess;

- (void)clear;
- (void)getCachedVoiceShortcuts:(id /* block */)a0;
- (void)setCachedVoiceShortcuts:(id /* block */)a0;
- (void)registerForDatabaseNotifications;
- (void)unregisterFromDatabaseNotifications;
- (void)databaseDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
