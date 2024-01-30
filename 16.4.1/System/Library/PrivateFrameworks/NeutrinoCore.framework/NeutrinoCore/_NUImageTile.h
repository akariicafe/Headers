@class NSString, NSObject;
@protocol OS_dispatch_queue, NUPurgeableStorage;

@interface _NUImageTile : NSObject <NUSharableImage> {
    NSObject<OS_dispatch_queue> *_queue;
    id<NUPurgeableStorage> _storage;
    unsigned long long _accessCount;
    BOOL _wasPurged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInUse;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithStorage:(id)a0;
- (int)useCount;
- (BOOL)isShared;
- (void).cxx_destruct;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;
- (BOOL)incrementAccessCount;
- (BOOL)_decrementAccessCount;
- (BOOL)_incrementAccessCount;
- (void)_markAsPurgeable;
- (BOOL)_markAsUnpurgeable;
- (void)_visitRead:(id /* block */)a0;
- (unsigned long long)accessCount;
- (long long)copyFromTile:(id)a0 region:(id)a1;
- (BOOL)decrementAccessCount;
- (void)decrementAccessCountButLeaveAccessedIfLastUse;
- (long long)readStorageInRegion:(id)a0 block:(id /* block */)a1;
- (void)returnToStorageFactory:(id)a0;
- (long long)writeStorageInRegion:(id)a0 block:(id /* block */)a1;

@end
