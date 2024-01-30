@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (id)anyObject;
- (id)member:(id)a0;
- (unsigned long long)count;
- (void)addObjectsFromArray:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (id)_allObjectsFromBackingSet;
- (id)initWithHashBlock:(id /* block */)a0;

@end
