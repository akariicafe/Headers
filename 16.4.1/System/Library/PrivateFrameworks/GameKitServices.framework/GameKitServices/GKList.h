@interface GKList : NSObject {
    unsigned int *_items;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly) unsigned long long count;

- (id)initWithSize:(unsigned long long)a0;
- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (void)print;
- (void)addIDsFromList:(id)a0;
- (void)addID:(unsigned int)a0;
- (id)allMatchingObjectsFromTable:(id)a0;
- (void)copyItemsInto:(id)a0;
- (BOOL)hasID:(unsigned int)a0;
- (void)removeAllIDs;
- (void)removeID:(unsigned int)a0;

@end
