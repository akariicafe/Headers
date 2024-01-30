@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)addObject:(id)a0;
- (void)addChange:(id)a0;
- (void)removeObject:(id)a0;
- (BOOL)_isToManyChangeInformation;
- (long long)_toManyPropertyType;
- (void)applyChangesToSet:(id)a0;
- (void)enumerateChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;

@end
