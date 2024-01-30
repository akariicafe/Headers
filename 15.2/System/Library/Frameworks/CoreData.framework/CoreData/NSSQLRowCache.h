@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;

- (id)sqlCore;
- (id)initWithPersistentStore:(id)a0;
- (void)dealloc;

@end
