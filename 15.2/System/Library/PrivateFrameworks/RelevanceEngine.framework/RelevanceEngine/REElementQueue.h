@class NSArray, REOrderingArray, NSMutableSet;

@interface REElementQueue : NSObject {
    REOrderingArray *_relevantElements;
    NSMutableSet *_hiddenElements;
}

@property (nonatomic) long long maximumRelevantElementsCount;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long visibleCount;
@property (readonly, nonatomic) NSArray *allElements;

- (void)performBatchUpdates:(id /* block */)a0;
- (BOOL)containsElement:(id)a0;
- (id)elementAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)updatePositionForElement:(id)a0 hidden:(BOOL)a1;
- (void)removeElement:(id)a0;
- (void)addElement:(id)a0 hidden:(BOOL)a1;
- (void)updateAllElements;
- (long long)indexOfElement:(id)a0;
- (id)initWithMaximumRelevantElementsCount:(long long)a0 comparators:(id)a1;

@end
