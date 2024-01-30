@class NSSet, NSMutableSet;

@interface BSCopyingCacheSet : NSObject {
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property (readonly) unsigned long long count;

- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)immutableSet;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;

@end
