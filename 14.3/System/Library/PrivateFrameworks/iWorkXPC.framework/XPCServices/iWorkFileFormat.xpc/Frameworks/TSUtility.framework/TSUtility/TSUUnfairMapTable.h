@class NSMapTable;

@interface TSUUnfairMapTable : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (readonly) unsigned long long count;

+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;

@end
