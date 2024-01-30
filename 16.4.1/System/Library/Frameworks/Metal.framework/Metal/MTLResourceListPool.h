@class MTLResourceList;

@interface MTLResourceListPool : NSObject {
    struct _MTLResourceListPoolPrivate { struct resourceListQueue { MTLResourceList *tqh_first; id *tqh_last; } queue; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; int count; } _priv;
    int _resourceListCapacity;
}

- (void)purge;
- (id)initWithResourceListCapacity:(int)a0;
- (void)dealloc;
- (int)availableCount;

@end
