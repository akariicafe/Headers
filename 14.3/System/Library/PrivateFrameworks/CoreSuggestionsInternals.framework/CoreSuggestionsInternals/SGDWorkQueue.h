@class NSString, NSMutableOrderedSet;

@interface SGDWorkQueue : NSObject {
    NSString *_dir;
    _Atomic long long _counter;
    NSMutableOrderedSet *_pendingNames;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long priority;

+ (id)pathForOldMessagesQueue;
+ (id)pathForNewMessagesQueue;

- (id)_pop;
- (id)init;
- (void).cxx_destruct;
- (id)popDictionaryById:(id)a0;
- (id)popDictionaryBySourceId:(id)a0 messageId:(id)a1;
- (id)addDictionary:(id)a0;
- (id)_popName:(id)a0;
- (void)resetForTesting;
- (id)description;
- (id)popDictionary;
- (void)closeDatabase;
- (id)initWithDirectory:(id)a0;
- (id)addDictionary:(id)a0 withSourceId:(id)a1 messageId:(id)a2;
- (id)initWithDirectory:(id)a0 priority:(long long)a1;

@end
