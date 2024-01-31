@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithPersistentStore:(id)a0;
- (id)sqlCore;

@end
