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

- (int)useCount;
- (id)initWithStorage:(id)a0;
- (BOOL)isShared;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)incrementAccessCount;
- (void)incrementUseCount;
- (BOOL)decrementUseCount;
- (BOOL)isValid;
- (BOOL)isInUse;
- (void)returnToStorageFactory:(id)a0;
- (unsigned long long)accessCount;
- (BOOL)decrementAccessCount;
- (BOOL)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
- (BOOL)decrementAccessAndUseCount;
- (BOOL)_incrementAccessCount;
- (BOOL)_decrementAccessCount;
- (void)_markAsPurgeable;
- (BOOL)_markAsUnpurgeable;
- (void)_visitRead:(id /* block */)a0;
- (long long)readStorageInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeStorageInRegion:(id)a0 block:(id /* block */)a1;
- (long long)copyFromTile:(id)a0 region:(id)a1;

@end
