@class NSMutableArray, NSString, NSArray, NSData, NSError, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue, LiveFSVolumeCore;

@interface LiveFSPathHelper : NSObject {
    NSObject<OS_dispatch_queue> *ourQueue;
    id<LiveFSVolumeCore> ourMount;
    NSString *rootFileHandle;
    NSData *_attributes;
    NSArray *pathComponents;
    unsigned long long currentPathComponent;
    NSMutableOrderedSet *fileHandleStack;
    NSMutableArray *attributeStack;
    unsigned long long fileHandleStackCount;
    BOOL lookupCompleted;
    BOOL lookupInProgress;
    BOOL resolveTrailingSymlink;
    unsigned long long numberOfSymlinks;
    id /* block */ completionHandler;
}

@property BOOL resolveTrailingSymlink;
@property (readonly) NSError *error;
@property (readonly) NSString *fileHandle;
@property (readonly) NSData *attributes;

+ (id)helperWithMount:(id)a0 andPath:(id)a1;

- (void)finalizeWithError:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resolveSymlink:(id)a0;
- (id)currentFileHandle;
- (void)finalizeWithErrno:(int)a0;
- (id)initWithMount:(id)a0 andPath:(id)a1;
- (void)lookupNextComponent;
- (void)lookupWithCompletionHandler:(id /* block */)a0;
- (id)peekFileHandle;
- (id)popFileHandle;
- (void)processLookupReplyWithResult:(int)a0 item:(id)a1 andAttributes:(id)a2;
- (void)processReadLinkReplyForLink:(id)a0 withResult:(int)a1 linkString:(id)a2 andAttributes:(id)a3;
- (void)pushFileHandle:(id)a0 attributes:(id)a1;
- (void)reclaimItem:(id)a0 withContinuation:(id /* block */)a1;

@end
