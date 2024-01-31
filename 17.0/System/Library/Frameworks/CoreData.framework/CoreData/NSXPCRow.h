@interface NSXPCRow : NSPersistentCacheRow {
    id _node;
}

- (id)objectID;
- (void)dealloc;
- (id)initWithNode:(id)a0;

@end
