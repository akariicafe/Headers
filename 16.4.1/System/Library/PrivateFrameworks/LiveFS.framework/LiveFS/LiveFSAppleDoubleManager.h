@class LiveFSVolume, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface LiveFSAppleDoubleManager : NSObject {
    NSMutableSet *_ADActiveForBaseHandleSet;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _ADActiveForBaseHandleSetRWLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _ADActiveForBaseHandleSetMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _ADActiveForBaseHandleSetCond;
    unsigned long long _ADAcctiveForBaseHandleSetWaiters;
}

@property (retain) LiveFSVolume *mount;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long clientID;

+ (id)AppleDoubleManagerForMount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)AppleDoubleForPurpose:(int)a0 withBaseFile:(id)a1 named:(id)a2 inDirectory:(id)a3 andPID:(int)a4;
- (id)AppleDoubleForWritingWithBaseFile:(id)a0 named:(id)a1 inDirectory:(id)a2 andPID:(int)a3;
- (id)AppleDoubleNameForFileNamed:(id)a0;
- (id)AppleDoubleForNamespaceWithBaseFile:(id)a0 named:(id)a1 inDirectory:(id)a2 andPID:(int)a3;
- (id)AppleDoubleForReadingWithBaseFile:(id)a0 named:(id)a1 inDirectory:(id)a2 andPID:(int)a3;
- (void)acquireForBaseFile:(id)a0;
- (BOOL)enumerateDirectory:(id)a0 intoArray:(id)a1;
- (id)initWithMount:(id)a0;
- (BOOL)isDotUnderBarFileName:(id)a0;
- (void)releaseForBaseFile:(id)a0;
- (BOOL)scrubDirectoryNamed:(id)a0 inDirectory:(id)a1 forPID:(int)a2;

@end
