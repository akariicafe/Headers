@interface NSXPCRow : NSPersistentCacheRow {
    id _node;
}

- (id)initWithNode:(id)a0;
- (id)objectID;
- (id)node;
- (void)dealloc;

@end
