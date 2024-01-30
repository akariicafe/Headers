@class NSHashTable, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface BKSAnimationFenceObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_handleNameToTraceMap;
    NSMapTable *_handleNameToFenceNameMap;
    NSMapTable *_fenceNameToHandleNamesMap;
    NSMapTable *_fenceNameToDeathSentinelMap;
    NSHashTable *_validDeathSentinelsTable;
    unsigned int _lastHandleName;
    unsigned int _encodeCount;
}

+ (id)sharedInstance;
+ (unsigned int)countFromEncodeIdentifier:(unsigned long long)a0;
+ (int)pidFromEncodeIdentifier:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)addHandle:(id)a0;
- (unsigned long long)nextEncodeIdentifier;
- (void)removeHandleWithName:(unsigned long long)a0;

@end
