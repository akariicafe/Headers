@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (id)objectEnumerator;
- (BOOL)containsObject:(id)a0;
- (id)initWithHashBlock:(id /* block */)a0;
- (id)_allObjectsFromBackingSet;
- (id)allObjects;
- (void)addObjectsFromArray:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)anyObject;
- (id)member:(id)a0;

@end
