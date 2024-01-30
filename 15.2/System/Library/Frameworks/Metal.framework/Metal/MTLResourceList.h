@class MTLResourceListPool;

@interface MTLResourceList : NSObject {
    struct { int chunkEntryCapacity; struct MTLResourceListChunk { int currentEntry; void **entries; struct MTLResourceListChunk *nextChunk; } currentChunk; MTLResourceListPool *pool; struct { MTLResourceList *tqe_next; id *tqe_prev; } entry; unsigned long long time_added; } _listPriv;
}

- (void)releaseAllObjectsAndReset;
- (id)initWithCapacity:(int)a0;
- (void)dealloc;

@end
