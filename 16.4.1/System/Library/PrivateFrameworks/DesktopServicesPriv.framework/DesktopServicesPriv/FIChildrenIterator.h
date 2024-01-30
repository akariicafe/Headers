@class NSArray;

@interface FIChildrenIterator : FINodeIterator

@property (copy, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL includeInvisible;
@property (nonatomic) unsigned long long index;

- (id)next;
- (id)first;
- (void).cxx_destruct;
- (unsigned long long)estimatedSize;
- (id)rawNext;
- (BOOL)fullyPopulated;
- (id)initWithChildren:(id)a0 includingInvisibleItems:(BOOL)a1;

@end
