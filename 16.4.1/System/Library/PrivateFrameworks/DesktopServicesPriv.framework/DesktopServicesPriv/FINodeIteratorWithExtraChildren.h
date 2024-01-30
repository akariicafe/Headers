@class FINodeIterator;

@interface FINodeIteratorWithExtraChildren : FINodeIterator

@property (retain, nonatomic) FINodeIterator *baseIterator;
@property (nonatomic) BOOL baseIteratorDone;
@property (retain, nonatomic) FINodeIterator *extraIterator;

- (id)next;
- (id)first;
- (void).cxx_destruct;
- (unsigned long long)estimatedSize;
- (BOOL)fullyPopulated;
- (id)initWithContainer:(id)a0 extraChildren:(id)a1 synchronous:(BOOL)a2 includingInvisibleItems:(BOOL)a3;

@end
