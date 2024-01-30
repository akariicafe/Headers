@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned int _localId;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) BOOL updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (void)flush;
- (void)flushWithTransaction;
- (void)resetBitMask;
- (void *)_renderShmem;
- (void)_setLocalContextId:(unsigned int)a0;
- (void)markWritten:(unsigned long long)a0;
- (void *)shmem;
- (unsigned long long)nextSlot;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)flushLocally;
- (void)dealloc;

@end
