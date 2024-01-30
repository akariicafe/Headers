@class MTLResourceListPool;

@interface MTLResourceList : NSObject {
    struct { unsigned int hashSize; unsigned int hashShift; unsigned long long *usedInfo; unsigned int *hopInfo; unsigned long long *hashTable; struct MTLResourceListChunk { unsigned int currentEntry; unsigned long long *entries; struct MTLResourceListChunk *nextChunk; } currentChunk; unsigned int chunkEntryCapacity; MTLResourceListPool *pool; struct { MTLResourceList *tqe_next; id *tqe_prev; } entry; unsigned long long time_added; } _listPriv;
    unsigned long long _defaultHashTable[2048];
    unsigned int _defaultHopInfo[2048];
    unsigned long long _defaultUsedInfo[2048];
}

- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (void)releaseAllObjectsAndReset;

@end
