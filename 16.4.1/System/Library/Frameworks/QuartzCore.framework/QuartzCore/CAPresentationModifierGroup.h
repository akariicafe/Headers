@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned long long _totalSize;
    unsigned int _localId;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) BOOL updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)flush;
- (void)flushLocally;
- (void *)shmem;
- (void)flushWithTransaction;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)resetBitMask;
- (void)dealloc;
- (void)markWritten:(unsigned long long)a0;
- (void)_setLocalContextId:(unsigned int)a0;
- (void *)_renderShmem;

@end
