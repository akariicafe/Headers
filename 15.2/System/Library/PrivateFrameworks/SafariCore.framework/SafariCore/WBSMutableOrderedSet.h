@class NSArray, NSMutableOrderedSet;

@interface WBSMutableOrderedSet : NSObject {
    NSMutableOrderedSet *_mutableOrderedSet;
    unsigned long long _maximumCount;
}

@property (readonly, nonatomic) NSArray *array;

- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeObjectsInArray:(id)a0;
- (id)initWithMaximumCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)_moveObjectAtIndexToLast:(unsigned long long)a0;
- (id)objectAtIndexWithoutAffectingRecency:(unsigned long long)a0;
- (void)markObjectAsRecentlyUsed:(id)a0;

@end
