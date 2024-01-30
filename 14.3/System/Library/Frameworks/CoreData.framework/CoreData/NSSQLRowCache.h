@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;

- (id)sqlCore;
- (void)dealloc;
- (id)initWithPersistentStore:(id)a0;

@end
